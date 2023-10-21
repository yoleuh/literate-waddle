CFLAGS = -std=c99 -pedantic -Wimplicit-function-declaration -Wreturn-type -Wformat -g
OBJ = lab4main.c read.c createNode.c insertNode.c populate.c populate_cumulative.c read.c createNode.c insertNode.c populate.c populate_cumulative.c cumulate.c calculate_current.c printHeader.c count_list.c goto_choices.c print_student.c print_scores.c choice_1.c choice_2.c print_choice_2.c print_choice_2_list.c prompt.c print_choices.c choice_3.c calculate_avg.c print_avg.c choice_4.c print_choice_4.c choice_5.c print_choice_5.c choice_6.c print_choice_6.c print_choice_6_grade.c choice_6_assign.c choice_7.c choice_8.c choice_8_assign.c print_choice_8.c choice_9.c print_choice_9.c delete.c ID_isduplicate.c fprintHeader.c fprint_student.c fprint_scores.c calculate_avg_f.c choice_10.c fprint_avg.c print_stuff.c free_list.c read_scores.c populate_main.c choice_arraying.c choice_2_str.c print_choice_7.c if_9.c

all: lab4 lab4.zip

lab4.zip: *.c *.h Makefile lab4Readme
	zip $@ $^

%.o: %.c *.h
	gcc -c $< -o $@ $(CFLAGS)

lab4: $(OBJ)
	gcc $^ -o $@ $(CFLAGS)

clean:
	rm -rf *.o lab4 lab4.zip
