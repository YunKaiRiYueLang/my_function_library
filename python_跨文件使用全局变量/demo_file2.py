import imp
import global_valude.global_value as global_value
import time

def thread1_func():
    while True:
        global_value.set_value("cls1","222")
        time.sleep(0.03)
    pass
def thread3_func():
    while True:
        global_value.set_value("cls1","333")
        time.sleep(0.035)
    pass