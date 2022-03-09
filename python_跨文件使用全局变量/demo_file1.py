from lib2to3.pytree import WildcardPattern
import global_valude.global_value as global_value
import _thread
import value
import time

global_value._init()
global_value.set_value("cls1","1")

def thread2_func():
    while(True):
        str=global_value.get_value("cls1")
        print(str)
        time.sleep(0.02)
    
    
    pass


_thread.start_new_thread(value.thread1_func,())
_thread.start_new_thread(value.thread3_func,())
_thread.start_new_thread(thread2_func,())
time.sleep(10)





