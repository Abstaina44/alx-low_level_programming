import random
import ctypes

cops = ctypes.CDLL('./100-operations.so')
cops.add.restype = ctypes.c_int
cops.sub.restype = ctypes.c_int
cops.mul.restype = ctypes.c_int
cops.div.restype = ctypes.c_int
cops.mod.restype = ctypes.c_int

a = random.randint(-111, 111)
b = random.randint(-111, 111)

print("{} + {} = {}".format(a, b, cops.add(a, b)))
print("{} - {} = {}".format(a, b, cops.sub(a, b)))
print("{} x {} = {}".format(a, b, cops.mul(a, b)))
print("{} / {} = {}".format(a, b, cops.div(a, b)))
print("{} % {} = {}".format(a, b, cops.mod(a, b)))
