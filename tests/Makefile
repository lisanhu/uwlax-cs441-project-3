#
# Huifeng Zhang
# CS 441/541: Project 3 Customized Tests
#

mycheck: scheduler mybanner_help \
	mycheck-level-1 mycheck-level-2 mycheck-level-3 \
	mycheck-level-4 mycheck-level-5 mycheck-level-6 \
	mycheck-level-7

mybanner_help:
	@echo "By default mycheck will run all levels."
	@echo "You can run an individual level by using one of the following:"
	@echo "   mycheck-level-1"
	@echo "   mycheck-level-2"
	@echo "   mycheck-level-3"
	@echo "   mycheck-level-4"
	@echo "   mycheck-level-5"
	@echo "   mycheck-level-6"
	@echo "   mycheck-level-7"
	@echo ""
	@sleep 1

###############################################
# Tests - Level 1
###############################################
LEVEL_1_IN=tests/level1.txt
mycheck-level-1: scheduler mybanner_1 \
	mycheck-level-1-s-1 mycheck-level-1-s-2 mycheck-level-1-s-3 \
	mycheck-level-1-s-4-q-2 mycheck-level-1-s-4-q-5 mycheck-level-1-s-4-q-10

mybanner_1:
	@echo ""
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"
	@echo "mmmmmmmmm Level 1 Tests mmmmmmmmmmm"
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"

LEVEL_1_OUT_S_1=tests/level1-exp-s-1.txt
mycheck-level-1-s-1: scheduler
	@given-tests/check.pl 1 0 $(LEVEL_1_IN) $(LEVEL_1_OUT_S_1)

LEVEL_1_OUT_S_2=tests/level1-exp-s-2.txt
mycheck-level-1-s-2: scheduler
	@given-tests/check.pl 2 0 $(LEVEL_1_IN) $(LEVEL_1_OUT_S_2)

LEVEL_1_OUT_S_3=tests/level1-exp-s-3.txt
mycheck-level-1-s-3: scheduler
	@given-tests/check.pl 3 0 $(LEVEL_1_IN) $(LEVEL_1_OUT_S_3)

LEVEL_1_OUT_S_4_Q_2=tests/level1-exp-s-4-q-2.txt
mycheck-level-1-s-4-q-2: scheduler
	@given-tests/check.pl 4 2 $(LEVEL_1_IN) $(LEVEL_1_OUT_S_4_Q_2)

LEVEL_1_OUT_S_4_Q_5=tests/level1-exp-s-4-q-5.txt
mycheck-level-1-s-4-q-5: scheduler
	@given-tests/check.pl 4 5 $(LEVEL_1_IN) $(LEVEL_1_OUT_S_4_Q_5)

LEVEL_1_OUT_S_4_Q_10=tests/level1-exp-s-4-q-10.txt
mycheck-level-1-s-4-q-10: scheduler
	@given-tests/check.pl 4 10 $(LEVEL_1_IN) $(LEVEL_1_OUT_S_4_Q_10)

###############################################
# Tests - Level 2
###############################################
LEVEL_2_IN=tests/level2.txt
mycheck-level-2: scheduler mybanner_2 \
	mycheck-level-2-s-1 mycheck-level-2-s-2 mycheck-level-2-s-3 \
	mycheck-level-2-s-4-q-2 mycheck-level-2-s-4-q-5 mycheck-level-2-s-4-q-10

mybanner_2:
	@echo ""
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"
	@echo "mmmmmmmmm Level 2 Tests mmmmmmmmmmm"
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"

LEVEL_2_OUT_S_1=tests/level2-exp-s-1.txt
mycheck-level-2-s-1: scheduler
	@given-tests/check.pl 1 0 $(LEVEL_2_IN) $(LEVEL_2_OUT_S_1)

LEVEL_2_OUT_S_2=tests/level2-exp-s-2.txt
mycheck-level-2-s-2: scheduler
	@given-tests/check.pl 2 0 $(LEVEL_2_IN) $(LEVEL_2_OUT_S_2)

LEVEL_2_OUT_S_3=tests/level2-exp-s-3.txt
mycheck-level-2-s-3: scheduler
	@given-tests/check.pl 3 0 $(LEVEL_2_IN) $(LEVEL_2_OUT_S_3)

LEVEL_2_OUT_S_4_Q_2=tests/level2-exp-s-4-q-2.txt
mycheck-level-2-s-4-q-2: scheduler
	@given-tests/check.pl 4 2 $(LEVEL_2_IN) $(LEVEL_2_OUT_S_4_Q_2)

LEVEL_2_OUT_S_4_Q_5=tests/level2-exp-s-4-q-5.txt
mycheck-level-2-s-4-q-5: scheduler
	@given-tests/check.pl 4 5 $(LEVEL_2_IN) $(LEVEL_2_OUT_S_4_Q_5)

LEVEL_2_OUT_S_4_Q_10=tests/level2-exp-s-4-q-10.txt
mycheck-level-2-s-4-q-10: scheduler
	@given-tests/check.pl 4 10 $(LEVEL_2_IN) $(LEVEL_2_OUT_S_4_Q_10)

###############################################
# Tests - Level 3
###############################################
LEVEL_3_IN=tests/level3.txt
mycheck-level-3: scheduler mybanner_3 \
	mycheck-level-3-s-1 mycheck-level-3-s-2 mycheck-level-3-s-3 \
	mycheck-level-3-s-4-q-2 mycheck-level-3-s-4-q-5 mycheck-level-3-s-4-q-10

mybanner_3:
	@echo ""
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"
	@echo "mmmmmmmmm Level 3 Tests mmmmmmmmmmm"
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"

LEVEL_3_OUT_S_1=tests/level3-exp-s-1.txt
mycheck-level-3-s-1: scheduler
	@given-tests/check.pl 1 0 $(LEVEL_3_IN) $(LEVEL_3_OUT_S_1)

LEVEL_3_OUT_S_2=tests/level3-exp-s-2.txt
mycheck-level-3-s-2: scheduler
	@given-tests/check.pl 2 0 $(LEVEL_3_IN) $(LEVEL_3_OUT_S_2)

LEVEL_3_OUT_S_3=tests/level3-exp-s-3.txt
mycheck-level-3-s-3: scheduler
	@given-tests/check.pl 3 0 $(LEVEL_3_IN) $(LEVEL_3_OUT_S_3)

LEVEL_3_OUT_S_4_Q_2=tests/level3-exp-s-4-q-2.txt
mycheck-level-3-s-4-q-2: scheduler
	@given-tests/check.pl 4 2 $(LEVEL_3_IN) $(LEVEL_3_OUT_S_4_Q_2)

LEVEL_3_OUT_S_4_Q_5=tests/level3-exp-s-4-q-5.txt
mycheck-level-3-s-4-q-5: scheduler
	@given-tests/check.pl 4 5 $(LEVEL_3_IN) $(LEVEL_3_OUT_S_4_Q_5)

LEVEL_3_OUT_S_4_Q_10=tests/level3-exp-s-4-q-10.txt
mycheck-level-3-s-4-q-10: scheduler
	@given-tests/check.pl 4 10 $(LEVEL_3_IN) $(LEVEL_3_OUT_S_4_Q_10)


###############################################
# Tests - Level 4
###############################################
LEVEL_4_IN=tests/level4.txt
mycheck-level-4: scheduler mybanner_4 \
	mycheck-level-4-s-1 mycheck-level-4-s-2 mycheck-level-4-s-3 \
	mycheck-level-4-s-4-q-2 mycheck-level-4-s-4-q-5 mycheck-level-4-s-4-q-10

mybanner_4:
	@echo ""
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"
	@echo "mmmmmmmmm Level 4 Tests mmmmmmmmmmm"
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"

LEVEL_4_OUT_S_1=tests/level4-exp-s-1.txt
mycheck-level-4-s-1: scheduler
	@given-tests/check.pl 1 0 $(LEVEL_4_IN) $(LEVEL_4_OUT_S_1)

LEVEL_4_OUT_S_2=tests/level4-exp-s-2.txt
mycheck-level-4-s-2: scheduler
	@given-tests/check.pl 2 0 $(LEVEL_4_IN) $(LEVEL_4_OUT_S_2)

LEVEL_4_OUT_S_3=tests/level4-exp-s-3.txt
mycheck-level-4-s-3: scheduler
	@given-tests/check.pl 3 0 $(LEVEL_4_IN) $(LEVEL_4_OUT_S_3)

LEVEL_4_OUT_S_4_Q_2=tests/level4-exp-s-4-q-2.txt
mycheck-level-4-s-4-q-2: scheduler
	@given-tests/check.pl 4 2 $(LEVEL_4_IN) $(LEVEL_4_OUT_S_4_Q_2)

LEVEL_4_OUT_S_4_Q_5=tests/level4-exp-s-4-q-5.txt
mycheck-level-4-s-4-q-5: scheduler
	@given-tests/check.pl 4 5 $(LEVEL_4_IN) $(LEVEL_4_OUT_S_4_Q_5)

LEVEL_4_OUT_S_4_Q_10=tests/level4-exp-s-4-q-10.txt
mycheck-level-4-s-4-q-10: scheduler
	@given-tests/check.pl 4 10 $(LEVEL_4_IN) $(LEVEL_4_OUT_S_4_Q_10)


###############################################
# Tests - Level 5
###############################################
LEVEL_5_IN=tests/level5.txt
mycheck-level-5: scheduler mybanner_5 \
	mycheck-level-5-s-1 mycheck-level-5-s-2 mycheck-level-5-s-3 \
	mycheck-level-5-s-4-q-2 mycheck-level-5-s-4-q-5 mycheck-level-5-s-4-q-10

mybanner_5:
	@echo ""
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"
	@echo "mmmmmmmmm Level 5 Tests mmmmmmmmmmm"
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"

LEVEL_5_OUT_S_1=tests/level5-exp-s-1.txt
mycheck-level-5-s-1: scheduler
	@given-tests/check.pl 1 0 $(LEVEL_5_IN) $(LEVEL_5_OUT_S_1)

LEVEL_5_OUT_S_2=tests/level5-exp-s-2.txt
mycheck-level-5-s-2: scheduler
	@given-tests/check.pl 2 0 $(LEVEL_5_IN) $(LEVEL_5_OUT_S_2)

LEVEL_5_OUT_S_3=tests/level5-exp-s-3.txt
mycheck-level-5-s-3: scheduler
	@given-tests/check.pl 3 0 $(LEVEL_5_IN) $(LEVEL_5_OUT_S_3)

LEVEL_5_OUT_S_4_Q_2=tests/level5-exp-s-4-q-2.txt
mycheck-level-5-s-4-q-2: scheduler
	@given-tests/check.pl 4 2 $(LEVEL_5_IN) $(LEVEL_5_OUT_S_4_Q_2)

LEVEL_5_OUT_S_4_Q_5=tests/level5-exp-s-4-q-5.txt
mycheck-level-5-s-4-q-5: scheduler
	@given-tests/check.pl 4 5 $(LEVEL_5_IN) $(LEVEL_5_OUT_S_4_Q_5)

LEVEL_5_OUT_S_4_Q_10=tests/level5-exp-s-4-q-10.txt
mycheck-level-5-s-4-q-10: scheduler
	@given-tests/check.pl 4 10 $(LEVEL_5_IN) $(LEVEL_5_OUT_S_4_Q_10)


###############################################
# Tests - Level 6
###############################################
LEVEL_6_IN=tests/level6.txt
mycheck-level-6: scheduler mybanner_6 \
	mycheck-level-6-s-1 mycheck-level-6-s-2 mycheck-level-6-s-3 \
	mycheck-level-6-s-4-q-2 mycheck-level-6-s-4-q-5 mycheck-level-6-s-4-q-10

mybanner_6:
	@echo ""
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"
	@echo "mmmmmmmmm Level 6 Tests mmmmmmmmmmm"
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"

LEVEL_6_OUT_S_1=tests/level6-exp-s-1.txt
mycheck-level-6-s-1: scheduler
	@given-tests/check.pl 1 0 $(LEVEL_6_IN) $(LEVEL_6_OUT_S_1)

LEVEL_6_OUT_S_2=tests/level6-exp-s-2.txt
mycheck-level-6-s-2: scheduler
	@given-tests/check.pl 2 0 $(LEVEL_6_IN) $(LEVEL_6_OUT_S_2)

LEVEL_6_OUT_S_3=tests/level6-exp-s-3.txt
mycheck-level-6-s-3: scheduler
	@given-tests/check.pl 3 0 $(LEVEL_6_IN) $(LEVEL_6_OUT_S_3)

LEVEL_6_OUT_S_4_Q_2=tests/level6-exp-s-4-q-2.txt
mycheck-level-6-s-4-q-2: scheduler
	@given-tests/check.pl 4 2 $(LEVEL_6_IN) $(LEVEL_6_OUT_S_4_Q_2)

LEVEL_6_OUT_S_4_Q_5=tests/level6-exp-s-4-q-5.txt
mycheck-level-6-s-4-q-5: scheduler
	@given-tests/check.pl 4 5 $(LEVEL_6_IN) $(LEVEL_6_OUT_S_4_Q_5)

LEVEL_6_OUT_S_4_Q_10=tests/level6-exp-s-4-q-10.txt
mycheck-level-6-s-4-q-10: scheduler
	@given-tests/check.pl 4 10 $(LEVEL_6_IN) $(LEVEL_6_OUT_S_4_Q_10)


###############################################
# Tests - Level 7
###############################################
LEVEL_7_IN=tests/level7.txt
mycheck-level-7: scheduler mybanner_7 \
	mycheck-level-7-s-1 mycheck-level-7-s-2 mycheck-level-7-s-3 \
	mycheck-level-7-s-4-q-2 mycheck-level-7-s-4-q-5 mycheck-level-7-s-4-q-10

mybanner_7:
	@echo ""
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"
	@echo "mmmmmmmmm Level 7 Tests mmmmmmmmmmm"
	@echo "mmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmmm"

LEVEL_7_OUT_S_1=tests/level7-exp-s-1.txt
mycheck-level-7-s-1: scheduler
	@given-tests/check.pl 1 0 $(LEVEL_7_IN) $(LEVEL_7_OUT_S_1)

LEVEL_7_OUT_S_2=tests/level7-exp-s-2.txt
mycheck-level-7-s-2: scheduler
	@given-tests/check.pl 2 0 $(LEVEL_7_IN) $(LEVEL_7_OUT_S_2)

LEVEL_7_OUT_S_3=tests/level7-exp-s-3.txt
mycheck-level-7-s-3: scheduler
	@given-tests/check.pl 3 0 $(LEVEL_7_IN) $(LEVEL_7_OUT_S_3)

LEVEL_7_OUT_S_4_Q_2=tests/level7-exp-s-4-q-2.txt
mycheck-level-7-s-4-q-2: scheduler
	@given-tests/check.pl 4 2 $(LEVEL_7_IN) $(LEVEL_7_OUT_S_4_Q_2)

LEVEL_7_OUT_S_4_Q_5=tests/level7-exp-s-4-q-5.txt
mycheck-level-7-s-4-q-5: scheduler
	@given-tests/check.pl 4 5 $(LEVEL_7_IN) $(LEVEL_7_OUT_S_4_Q_5)

LEVEL_7_OUT_S_4_Q_10=tests/level7-exp-s-4-q-10.txt
mycheck-level-7-s-4-q-10: scheduler
	@given-tests/check.pl 4 10 $(LEVEL_7_IN) $(LEVEL_7_OUT_S_4_Q_10)
