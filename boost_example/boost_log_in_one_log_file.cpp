#include <boost/log/core.hpp>
#include <boost/log/trivial.hpp>
#include <boost/log/expressions.hpp>
#include <boost/log/sinks/text_file_backend.hpp>
#include <boost/log/utility/setup/file.hpp>
#include <boost/log/utility/setup/common_attributes.hpp>
#include <boost/log/sources/severity_logger.hpp>
#include <boost/log/sources/record_ostream.hpp>
//boost  1.85
int main1() {
	BOOST_LOG_TRIVIAL(info) << "Hello, World!";
	BOOST_LOG_TRIVIAL(warning) << "test warn";
	//trace fatal等级别日志不在打印。
	return 0;
}

int main2() {
	//boost 1.64
	boost::log::add_file_log("sample.log");
	BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
	BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
	BOOST_LOG_TRIVIAL(info) << "An informational severity message";
	BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
	BOOST_LOG_TRIVIAL(error) << "An error severity message";
	BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";

	return 0;
}
int main3() {
	//指定文件名，日志等级
	boost::log::add_file_log("sample.log");
	// 设置全局过滤器，仅允许warning及以上级别的日志  
	boost::log::core::get()->set_filter
	(
		boost::log::trivial::severity >= boost::log::trivial::warning
	);
	BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
	BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
	BOOST_LOG_TRIVIAL(info) << "An informational severity message";
	BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
	BOOST_LOG_TRIVIAL(error) << "An error severity message";
	BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";

	return 0;
}
int main4_func2() {
	BOOST_LOG_TRIVIAL(error) << "main4_func2An error severity message";
	BOOST_LOG_TRIVIAL(error) << "main4_func2An error severity message";
	return 0;

}

int main4() {
	//指定文件名，日志等级
	boost::log::add_file_log("sample.log");
	// 设置全局过滤器，仅允许warning及以上级别的日志  
	boost::log::core::get()->set_filter
	(
		boost::log::trivial::severity >= boost::log::trivial::warning
	);
	BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
	BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
	BOOST_LOG_TRIVIAL(info) << "An informational severity message";
	BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
	BOOST_LOG_TRIVIAL(error) << "An error severity message";
	BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";

	main4_func1();
	main4_func2();

	return 0;
}
int main5_thread1() {
	int i = 0;
	while (i < 100) {
		BOOST_LOG_TRIVIAL(error) << "main5_thread1  An error severity message";
		i++;
	}
	return 0;
}
int main5_thread2() {
	int i = 0;
	while (i < 100) {
		BOOST_LOG_TRIVIAL(error) << "main5_thread2  An error severity message";
		i++;
	}
	return 0;
}
int main5() {
	//再不同线程中记录日志
	boost::log::add_file_log("sample.log");
	// 设置全局过滤器，仅允许warning及以上级别的日志
	boost::log::core::get()->set_filter
	(
		boost::log::trivial::severity >= boost::log::trivial::warning
	);
	std::thread t1(main5_thread1);
	std::thread t2(main5_thread2);
	t1.join();
	t2.join();
	return 0;
}
int main6() {
	//指定文件名，日志等级
	boost::log::add_file_log(boost::log::keywords::file_name = "example.log",
		boost::log::keywords::open_mode = std::ios_base::app);
	// 设置全局过滤器，仅允许warning及以上级别的日志  
	boost::log::core::get()->set_filter
	(
		boost::log::trivial::severity >= boost::log::trivial::warning
	);
	BOOST_LOG_TRIVIAL(trace) << "A trace severity message";
	BOOST_LOG_TRIVIAL(debug) << "A debug severity message";
	BOOST_LOG_TRIVIAL(info) << "An informational severity message";
	BOOST_LOG_TRIVIAL(warning) << "A warning severity message";
	BOOST_LOG_TRIVIAL(error) << "An error severity message";
	BOOST_LOG_TRIVIAL(fatal) << "A fatal severity message";


	return 0;
}
int main7() {
	boost::log::add_file_log(boost::log::keywords::file_name = "sample_%4N.log",//设置一个可变化的文件名。也可以时  sample_%4N.log    sample_log%Y%m%d_%4N.log.设置成死的文件名。日志无法生成新文件。
		boost::log::keywords::rotation_size = 1024*100, //0.5kb
		//达到1024*100字节时，设置滚动文件为example.log.1
		boost::log::keywords::open_mode = std::ios_base::app);
	// 设置全局过滤器，仅允许warning及以上级别的日志
	boost::log::core::get()->set_filter
	(
		boost::log::trivial::severity >= boost::log::trivial::warning
	);

	int i = 0;
	while (i < 10000) {
		BOOST_LOG_TRIVIAL(error) << "main5_thread1  An error severity message";
		i++;
	}


	return 0;
}
int main() {

	//未设计复杂的用法。
	//main1();//直接使用，在控制台打印日志。
	//main2();//日志存入文件中。
	//main3();//存入指定登记的日志
	 //main4();//在不同函数中向同一个文件记入日志。
	//main5();//在不同线程中向同一个文件记入日志。
	//main6();//每次重新记录日志时，以追加的方式记录。（前面的记录日志的方式，没清空文件内容，从头写入）
	main7();//日志滚动记录，写到指定大小，再新的文件中写。
}





























































