BIN    = test

SRCS   = Test.cpp convert.cpp 
OBJS   = $(patsubst %.cpp,%.o,$(SRCS))

CC     = arm-linux-gnueabihf-g++
#DEBUG  = -g -DDEBUG
CFLAGS = $(DEBUG) -Wall -O3 -I./include
LDFLAGS = -L./lib
LIBS   = -lTextureAS_arm  libjpeg.a

.cpp.o:
	@echo building: $< --\> $(patsubst %.cpp,%.o, $<)
	$(CC) $(CFLAGS) $(CPPFLAGS) $(INCLOC) -c $<

all: $(BIN)

$(BIN): $(OBJS)
	@echo linking library: --\> $@
	$(CC) $(LDFLAGS) $(OBJS) $(LIBS) -o $(BIN)

clean:
	rm -f $(OBJS)

distclean:
	rm -f $(OBJS) $(BIN)

