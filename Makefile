# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: jzoltan <jzoltan@student.42.fr>            +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/02/03 04:30:43 by jzoltan           #+#    #+#              #
#    Updated: 2022/02/12 09:06:09 by jzoltan          ###   ########.fr        #
#                                                                              #
# **************************************************************************** #
#*
all: compile
.SUFFIXES:
#*
#* ************************************************************************** *#
#*                              Project Type                                  *#
#* ************************************************************************** *#
#*
LIBRARY         =
HAS_BONUS	=
#*
#* ************************************************************************** *#
#*                             Executable name                                *#
#* ************************************************************************** *#
#*
NAME            =push_swap
DEBUG_NAME      =d_swap
BONUS_NAME      =
#*
#* ************************************************************************** *#
#*                               Run Arguments                                *#
#* ************************************************************************** *#
#*
ARG                     = -74 156 779 527 689 -60 193 47 -680 -344 573 721 151 701 543 197 607 556 998 356 112 240 -847 297 348 -723 278 374 -2 806 62 507 -310 -980 -822 -140 -148 -720 -573 180 423 833 -33 326 21 -614 -718 784 23 63 -130 -108 -696 37 -934 130 551 954 742 878 0 -766 287 565 -77 430 273 -172 674 -859 413 -752 255 389 -764 -7 -831 99 -377 -281 -466 -604 -134 -358 910 138 518 454 110 523 -951 433 298 -852 682 232 -544 -160 166 254 -559 -608 -974 -222 -146 785 -474 -596 437 723 -772 889 497 122 773 -909 -290 -345 339 -613 212 864 142 -967 -730 631 526 292 139 81 -673 540 397 -541 761 -860 802 832 -459 13 -326 907 217 -71 -785 -992 -479 550 -724 -856 -991 -298 -526 -546 -556 363 -773 -182 614 -173 218 373 -628 124 464 201 -574 208 -268 866 28 719 481 -639 813 893 -415 -495 303 -674 80 -322 -530 -868 -742 696 2 323 -563 331 -460 -363 -304 258 115 -589 -83 169 -269 -203 -666 616 -771 625 -405 -129 -670 844 -101 675 -89 -621 -379 -333 -450 914 -409 70 707 -158 -977 -577 414 420 428 -657 310 -142 449 706 764 621 -686 673 786 979 838 834 -48 -292 -439 283 -13 -228 630 -445 -305 -588 194 847 517 -267 -186 -485 -898 983 -323 371 -159 -579 897 600 -444 960 -683 11 392 -871 808 -99 -675 32 -903 3 -122 -361 249 -152 -113 -697 492 -558 -67 91 809 -529 -273 -490 20 -681 -692 -500 -289 -263 -712 -735 641 -799 -555 725
#*
#* ************************************************************************** *#
#*                          Compilation variables                             *#
#* ************************************************************************** *#
#*
DEBUG_PROGRAM           =gdb -tui -arg
SRCS_EXT                =.c
OBJS_EXT                =.o
HEADER_EXT              =.h
DFILES_EXT              =.d
CC                      =cc
ARCHIVE                 =ar rc
CFLAG                   =-Wextra -Wall -Werror
DEBUG_FLAG              =-g3 -Wextra -Wall -Werror
DFLAG                   =-MT $@ -MD -MP -MF $(DFILES_DIR)/$*$(DFILES_EXT)
CLINK                   =ft jz
DEPENDENCIES_PATHS      =ft/libft.a jz/libjz.a
#*
#* ************************************************************************** *#
#*                               Directories                                  *#
#* ************************************************************************** *#
#*
SRCS_DIR        =Sources
INCLUDES_DIR    =Includes
OBJS_DIR        =Objects
DFILES_DIR      =HeaderDependencies
DEPENDENCIES    =Dependencies
DEP_INCLUDES    =ft/Includes jz/Includes
#*
#* ************************************************************************** *#
#*                                  Files                                     *#
#* ************************************************************************** *#
#*
SORT                    = big_sort  big_sort_utils  sort_arr  sort_five \
	sort_four sort_numbers  sort_three  sort_two

LST                     = ft_list_addfront ft_list_last ft_list_len \
	ft_list_mid ft_list_new ft_list_prelast ft_lists_addback 

OPERATIONS              = pa pb ra rb rr rra rrb rrr sa sb ss

SOURCES_NAME            =validate_args  push_swap \
	$(addprefix sort/, $(SORT)) $(addprefix lst/, $(LST)) \
	$(addprefix operations/swap_, $(OPERATIONS))

BONUS_SOURCES_NAME      =

MAIN_NAME               =

BONUS_MAIN_NAME         =
#*
#* ************************************************************************** *#
#*                               Conversions                                  *#
#* ************************************************************************** *#
#*
SOURCES                 =$(addsuffix $(SRCS_EXT), $(SOURCES_NAME))
BONUS_SOURCES           =$(addsuffix $(SRCS_EXT), $(BONUS_SOURCES_NAME))
MAIN                    =$(addsuffix $(SRCS_EXT), $(MAIN_NAME))
BONUS_MAIN              =$(addsuffix $(SRCS_EXT), $(BONUS_MAIN_NAME))
DEPS                    =$(addprefix $(DEPENDENCIES)/, $(DEPENDENCIES_PATHS))
CLINK                  :=$(addprefix -l, $(CLINK))

ifeq ($(SRCS_DIR),)
SRCS                    =$(SOURCES)
else
SRCS                    =$(addprefix $(SRCS_DIR)/,$(SOURCES))
endif

ifeq ($(OBJS_DIR),)
OBJS                    =$(patsubst %$(SRCS_EXT),%$(OBJS_EXT), $(SOURCES))
else
OBJS                    =$(patsubst %$(SRCS_EXT),$(OBJS_DIR)/%$(OBJS_EXT), $(SOURCES))
endif

ifeq ($(OBJS_DIR),)
BOBJS                   =$(patsubst %$(SRCS_EXT),%$(OBJS_EXT), $(SOURCES))
else
BOBJS                   =$(patsubst %$(SRCS_EXT),$(OBJS_DIR)/%$(OBJS_EXT), $(SOURCES))
endif

ifeq ($(DFILES_DIR),)
DFS                     =$(patsubst %$(SRCS_EXT),%$(DFILES_EXT), $(SOURCES))
else
DFS                     =$(patsubst %$(SRCS_EXT),$(DFILES_DIR)/%$(DFILES_EXT), $(SOURCES))
endif

CADDLINK                =$(addprefix -L, $(dir $(DEPS)))

INCS                    =$(addprefix -I, $(INCLUDES_DIR) $(addprefix $(DEPENDENCIES)/, $(DEP_INCLUDES)))

#*
#* ************************************************************************** *#
#*                              Directories Rule                              *#
#* ************************************************************************** *#
#*
%/:
	mkdir -p $@
#*
#* ************************************************************************** *#
#*                                Bonus Rule                                  *#
#* ************************************************************************** *#
#*
ifneq ($(HAS_BONUS),)
ifeq ($(BONUS_NAME),$(NAME))
bonus:
	@make SOURCES="$(BONUS_SOURCES_NAME)" \
		MAIN="$(BONUS_MAIN_NAME)" \
		BONUS_MAIN="$(MAIN_NAME)" all
else
$(BONUS_NAME): $(BOBJS) $(DEPS)
	rm -f $(BONUS_MAIN)
	$(CC) $(CFLAG) -o $(NAME) $(BOBJS) $(CADDLINK) $(CLINK)
bonus: $(BONUS_NAME)
	@make SOURCES="$(BONUS_SOURCES_NAME)" \
		MAIN="$(BONUS_MAIN_NAME)" \
		BONUS_MAIN="$(MAIN_NAME)" all
.PHONY:bonus
endif
endif
#*
#* ************************************************************************** *#
#*                               Objects Rule                                 *#
#* ************************************************************************** *#
#*
.SECONDEXPANSION:
$(OBJS_DIR)/%$(OBJS_EXT): $(SRCS_DIR)/%$(SRCS_EXT) | \
		$$(dir $$@) \
		$$(dir $$(DFILES_DIR)/$$*$$(DFILES_EXT))
	$(CC) $(CFLAG) $(INCS) -c $< -o $@ $(DFLAG)

include $(wildcard $(DFS))
#*
#* ************************************************************************** *#
#*                            Dependencies rules                              *#
#* ************************************************************************** *#
#*
%.a:
	(cd $(dir $@) && make)
#*
#* ************************************************************************** *#
#*                             Compilation Rule                               *#
#* ************************************************************************** *#
ifneq ($(LIBRARY),)
$(NAME): $(OBJS) $(DEPS)
	rm -f $(BONUS_MAIN)
	$(ARCHIVE) $(NAME) $(OBJS)
else
$(NAME): $(OBJS) $(DEPS)
	rm -f $(BONUS_MAIN)
	$(CC) $(CFLAG) -o $(NAME) $(OBJS) $(CADDLINK) $(CLINK)
endif
compile: $(NAME)
.PHONY: compile all
#*
#* ************************************************************************** *#
#*                                     Run                                    *#
#* ************************************************************************** *#
#*
ifeq ($(LIBRARY),)
run: $(NAME)
	./$(NAME) $(ARG)
debug_run: $(DEBUG_NAME)
	$(DEBUG_PROGRAM) $(DEBUG_NAME) $(ARG)
drun: debug_run

r: run

dr: drun
.PHONY: run debug_run drun r dr
endif
#*
#* ************************************************************************** *#
#*                                    Debug                                   *#
#* ************************************************************************** *#
#*
ifeq ($(LIBRARY),)
$(DEBUG_NAME): $(SRCS) $(DEPS)
	rm -f $(BONUS_MAIN)
	$(CC) $(DEBUG_FLAG) $(INCS) -o $(DEBUG_NAME) $(SRCS) $(CADDLINK) $(CLINK)
debug: $(DEBUG_NAME)

de: debug

db: debug

.PHONY:de debug db
endif
#*
#* ************************************************************************** *#
#*                                    Cleanup                                 *#
#* ************************************************************************** *#
#*
CLEAN_FILES= $(wildcard $(sort $(OBJS) $(BOBJS) $(DFS)))
FCLEAN_FILES= $(wildcard $(NAME) $(DEBUG_NAME))

clean:
ifneq ($(CLEAN_FILES),)
	rm -f $(CLEAN_FILES)
endif

fclean: clean
ifneq ($(FCLEAN_FILES),)
	rm -f $(FCLEAN_FILES)
endif

re: fclean all

remake: re

.PHONY: clean fclean re remake
#*
#* ************************************************************************** *#
#*                                   Appendix                                 *#
#* ************************************************************************** *#
#*
