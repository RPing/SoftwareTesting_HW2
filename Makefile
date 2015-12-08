CXX=g++
GTEST_DIR=gtest
G_INCLUDE=${GTEST_DIR}/include
CXXFLAGS=-std=c++11 -I include -I ${G_INCLUDE} -g -Wall -Wextra -pthread -fprofile-arcs -ftest-coverage


all: coverage_triangle coverage_nextdate coverage_commission

coverage_triangle: coverage_triangle.o triangle.o
	$(CXX) $(CXXFLAGS) $^ -l$(GTEST_DIR) -o $@
coverage_nextdate: coverage_nextdate.o nextdate.o
	$(CXX) $(CXXFLAGS) $^ -l$(GTEST_DIR) -o $@
coverage_commission: coverage_commission.o commission.o
	$(CXX) $(CXXFLAGS) $^ -l$(GTEST_DIR) -o $@

coverage_triangle.o: test/coverage_triangle.cpp include/triangle.h
	$(CXX) $(CXXFLAGS) -c $<
coverage_nextdate.o: test/coverage_nextdate.cpp include/nextdate.h
	$(CXX) $(CXXFLAGS) -c $<
coverage_commission.o: test/coverage_commission.cpp include/commission.h
	$(CXX) $(CXXFLAGS) -c $<

triangle.o: src/triangle.cpp include/triangle.h
	$(CXX) $(CXXFLAGS) -c $<
nextdate.o: src/nextdate.cpp include/nextdate.h
	$(CXX) $(CXXFLAGS) -c $<
commission.o: src/commission.cpp include/commission.h
	$(CXX) $(CXXFLAGS) -c $<

clean:
	rm -f *.o *.gcov *.gcno *.gcda
	rm -f coverage_triangle coverage_nextdate coverage_commission
