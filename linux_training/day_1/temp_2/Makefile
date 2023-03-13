path = $(shell pwd)/

c_files =$(shell find $(path)c_files -name '*.c')
h_files =$(shell find $(path)h_files -name '*.h')

all:
	gcc -include $(h_files) $(c_files) -o output

clean:
	rm -rf output
