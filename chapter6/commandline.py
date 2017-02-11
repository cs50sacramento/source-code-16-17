import sys

# there is no argc in python; you take the length of argv
argc = len(sys.argv)

print("# of command-line arguments: {}".format(argc))

print("command-line arguments: {}".format(sys.argv))

print("first command-line argument: {}".format(sys.argv[0]))