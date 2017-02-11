from sys import *

# there is no argc in python; you take the length of argv
argc = len(argv)

print("# of command-line arguments: {}".format(argc))

print("command-line arguments: {}".format(argv))

print("first command-line argument: {}".format(argv[0]))