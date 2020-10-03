from threading import *
from time import sleep
class Hello (Thread):
    def run(self):
        for i in range(5):
            print('Hello')
            sleep(1)

class Hi (Thread):
    def run(self):
        for i in range(5):
            print('Hi')
            sleep(1)

t1 = Hello()
t2 = Hi()

t1.start()
sleep(0.2)        # To avoid any collision between the two or we can say to unsync them.
t2.start()


t1.join()
t2.join()
print('Bye')
