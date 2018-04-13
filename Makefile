obj = main.c
result = main

default:
				gcc -o $(result) $(obj)
clean:
				rm -rf $(result)
