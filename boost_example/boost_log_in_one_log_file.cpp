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

int main() {

	//未设计复杂的用法。
	//main1();//直接使用，在控制台打印日志。
	//main2();//日志存入文件中。
	//main3();//存入指定登记的日志
	main4();//在不同函数中向同一个文件记入日志。
}






























































