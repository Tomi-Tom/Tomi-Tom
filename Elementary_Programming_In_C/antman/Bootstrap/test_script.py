#!/usr/bin/env python3
import os
from sys import argv

def get_file_ant() -> str:
    res = ""
    os.system('./antman tests/test_file_task01 > compressed.txt')
    filin = open("compressed.txt", "r")
    lines = filin.readlines()
    for line in lines:
        res += line
    return res

def get_file_gia() -> str:
    res = ""
    os.system('./giantman compressed.txt > decompressed.txt')
    filin = open("decompressed.txt", "r")
    lines = filin.readlines()
    for line in lines:
        res += line
    return res

def get_file_test() -> str:
    res = ""
    filin = open("tests/test_file_task01", "r")
    lines = filin.readlines()
    for line in lines:
        res += line
    return res

def files_cmp(f1 : str, f2 : str) -> int:
    if (f1 == f2):
        return 1
    return 0

def base():
    if files_cmp(get_file_test(), get_file_gia()) == 1:
        print("OK")
    else:
        print("KO")
    perc = (len(get_file_ant()) / len(get_file_test())) * 100
    print(f"The file was compressed and reduced to {perc:.0f}% of its original size.")

def clear_useless():
    os.system('rm -rf compressed.txt decompressed.txt')

base()
clear_useless()