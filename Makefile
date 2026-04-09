fonts_hook_x11.so: fonts_hook_x11.o
	gcc -m32 -shared -o fonts_hook_x11.so fonts_hook_x11.o -ldl -lX11

fonts_hook_x11.o: fonts_hook_x11.c
	gcc -m32 -Wall -fPIC -g -c fonts_hook_x11.c

clean:
	rm -f *.o *.so
