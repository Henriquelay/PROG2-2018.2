VALFLAGS=rola
OBJD=descompactador.o arvore.o bin.o codificador.o escreveArquivoOriginal.o leitorArquivo.o lista.o organizadorLista.o
OBJC=compactador.o arvore.o bin.o codificador.o escreveArquivoCompactado.o leitorArquivo.o lista.o organizadorLista.o
CFLAGS=-g -Wall

all: compactador descompactador
	$ make cleano

comp: compactador
	./compactador ${ARG}

desc: descompactador
	./descompactador ${ARG}

descompactador: ${OBJD}
	gcc ${CFLAGS} ${OBJD} -o descompactador -lm

compactador: ${OBJC}
	gcc ${CFLAGS} ${OBJC} -o compactador -lm

clean: 
	-rm -rf *.o compactador descompactador

cleano: 
	-rm -rf *.o
    
valcomp: compactador
	valgrind ${VALFLAGS} ./compactador ${ARG}

valdesc: descompactador
	valgrind ${VALFLAGS} ./descompactador ${ARG}

arvore.o: arvore.c arvore.h
	gcc ${CFLAGS} -c arvore.c

bin.o: bin.c bin.h
	gcc ${CFLAGS} -c bin.c -lm

codificador.o: codificador.c codificador.h
	gcc ${CFLAGS} -c codificador.c

escreveArquivoCompactado.o: escreveArquivoCompactado.c escreveArquivoCompactado.h
	gcc ${CFLAGS} -c escreveArquivoCompactado.c

escreveArquivoOriginal.o: escreveArquivoCompactado.c escreveArquivoCompactado.h
	gcc ${CFLAGS} -c escreveArquivoOriginal.c

leitorArquivo.o: leitorArquivo.c leitorArquivo.h
	gcc ${CFLAGS} -c leitorArquivo.c

lista.o: lista.c lista.h
	gcc ${CFLAGS} -c lista.c
		
organizadorLista.o: organizadorLista.c organizadorLista.h
	gcc ${CFLAGS} -c organizadorLista.c

compactador.o: compactador.c
	gcc ${CFLAGS} -c compactador.c
		
descompactador.o: descompactador.c
	gcc ${CFLAGS} -c descompactador.c