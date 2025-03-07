create-bin:
	mkdir bin

build:
	g++ -o bin/main src/main.cpp

run:
	if make create-bin; then \
		make build; \
		./bin/main; \
	else \
		make build; \
		./bin/main; \
	fi
