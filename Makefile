#SHELL:=/bin/bash

O_FILES:=$(shell find . -type f -name "*.o")
BIN_FILES=$(shell find ./module* -type f -perm -u+x)

ofiles:
	@echo "All .o files:"
	@echo $(O_FILES)

binfiles:
	@echo "All bin files:"
	@echo $(BIN_FILES)

clean: ofiles
	@rm -f $(O_FILES)

fclean: clean binfiles
	@rm -f $(BIN_FILES)

.PHONY:		bin clean fclean