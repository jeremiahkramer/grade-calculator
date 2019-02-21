/*******************************
** Program: grade_calculator
** Author: Jeremiah Kramer
** Date: 1/31/17
** Description: This program calculates your current grade within each category or overall. It also can predict your grade.
** Input: Number (0-5) associated with category you want to calc and then input your grade and scale.
** Output: Your grade for either: Labs, Assignments, Recitations, Tests, or The Class.
*******************************/
#include <iostream>

using namespace std;

float calc_labs(float score, float scale, float number){  //calculates lab grade if scale doesn't vary

	float sum = 0;
	float avg = 0;
	
	int x=1;
		do{
			cout << "Lab ";
			cout << x;
			cout << " score: ";
			cin >> score;
			x++;
			sum = sum + score;
			avg = (sum / (scale * number)) * 100;
		}while(x<=number);

	return avg;

}
float calc_labs_vary(float score, float number){  //calculates lab grade if scale varies

	float points;
	float sum_score = 0, sum_points = 0, avg = 0;

	int x=1, y=1;
		do{
			cout << "Lab ";
			cout << x;
			cout << " points: ";
			cin >> points;
			x++;
			cout << "Lab ";
			cout << y;
			cout << " score: "; 
			cin >> score;
			y++;
			sum_points = sum_points + points;
			sum_score = sum_score + score;
			avg = (sum_score / sum_points) * 100;
		}while(x<=number);

	return avg;

}
float lab_choice(int choice, float number){  //determines what to do when user inputs an int if lab scale varies or not
	
	float scale, score, l;

	if (choice == 0){
		cout << "Out of how many points?: ";
		cin >> scale;
		cout << endl;
		
		l = calc_labs(score, scale, number);
		cout << "Your lab average is: " << l << endl;
		return l;
	}
	
	if (choice == 1){
		l = calc_labs_vary(score, number);
		cout << "Your lab average is: " << l << endl;
		return l;
	}
}
float labs(){  //calculates lab grade

	int choice;
	float number, lab_c;

	cout << "How many labs?" << endl;
	cin >> number;
	
	cout << "Do the point values vary? (0: No, 1: Yes): ";
	cin >> choice;
	cout << endl;
	
	lab_c = lab_choice(choice, number);
	return lab_c;
}
float calc_assignments(float score, float scale, float number){ //calculates assignment grade if scale doesn't vary
	
	float sum = 0;
	float avg = 0;
	
	int x=1;
		do{
			cout << "Assignment ";
			cout << x;
			cout << " score: ";
			cin >> score;
			x++;
			sum = sum + score;
			avg = (sum / (scale * number)) * 100;
		}while(x<=number);

	return avg;
}
float calc_assignments_vary(float score, float number){  //calculates assignment grade if scale varies

	float points;
	float sum_score = 0, sum_points = 0, avg = 0;

	int x=1, y=1;
		do{
			cout << "Assignment ";
			cout << x;
			cout << " points: ";
			cin >> points;
			x++;
			cout << "Assignment ";
			cout << y;
			cout << " score: ";
			cin >> score;
			y++;
			sum_points = sum_points + points;
			sum_score = sum_score + score;
			avg = (sum_score / sum_points) * 100;
		}while(x<=number);

	return avg;

}
float assignment_choice(int choice, float number){  //determines what to do when user inputs an int if assignment scale varies or not
		
	float scale, score, a;

	if (choice == 0){
	cout << "Out of how many points?: ";
		cin >> scale;
		cout << endl;

		a = calc_assignments(score, scale, number);
		cout << "Your Assignment average is: " << a << endl;
		return a;
	}
	if (choice == 1){
		a = calc_assignments_vary(score, number);
		cout << "Your Assignment average is: " << a << endl;	
		return a;
	}
}
float assignments(){  //calculates assignment grade
	
	int choice;
	float number, assignment_c;

	cout << "How many Assignments?" << endl;
	cin >> number;
		
	cout << "Do the point values vary? (0: No, 1: Yes): ";
	cin >> choice;
	cout << endl;

	assignment_c = assignment_choice(choice, number);
	return assignment_c;
}
float calc_quiz(float score, float scale, float number){  //calculates quiz grade if scale doesn't vary
	
	float sum = 0;
	float avg = 0;
	
	int x=1;
		do{
			cout << "Quiz ";
			cout << x;
			cout << " score: ";
			cin >> score;
			x++;
			sum = sum + score;
			avg = (sum / (scale * number)) * 100;
		}while(x<=number);

	return avg;

}
float calc_quiz_vary(float score, float number){  //calculates quiz grade if scale varies

	float points;
	float sum_score = 0, sum_points = 0, avg = 0;
	
	int x=1, y=1;
		do{
			cout << "Quiz ";
			cout << x;
			cout << " points: ";
			cin >> points;
			x++;
			cout << "Quiz ";
			cout << y;
			cout << " score: ";
			cin >> score;
			y++;
			sum_points = sum_points + points;
			sum_score = sum_score + score;
			avg = (sum_score / sum_points) * 100;
		}while(x<=number);
	
	return avg;

}
float quiz_choice(int choice, float number){  //determines what to do when user inputs an int if quiz scale varies or not
		
	float scale, score, q;

	if (choice == 0){
		cout << "Out of how many points?: ";
		cin >> scale;
		cout << endl;
	
		q = calc_quiz(score, scale, number);
		cout << "Your Quiz average is: " << q << endl << endl;
		return q;
}
	if (choice == 1){
		q = calc_quiz_vary(score, number);
		cout << "Your Quiz average is: " << q << endl << endl;
		return q;
	}
}
float quiz(){  //calculates quiz grade

	int choice;
	float number, quiz_c;

	cout << "How many quizzes?: ";
	cin >> number;
		
	cout << "Do the point values vary? (0: No, 1: Yes): ";
	cin >> choice;
	cout << endl;

	quiz_c = quiz_choice(choice, number);
	return quiz_c;
}
float calc_design(float score, float scale, float number){  //calculates design grade if scale doesn't vary
	
	float sum = 0;
	float avg = 0;
	
	int x=1;
		do{
			cout << "Design ";
			cout << x;
			cout << " score: ";
			cin >> score;
			x++;
			sum = sum + score;
			avg = (sum / (scale * number)) * 100;
		}while(x<=number);

	return avg;
}
float calc_design_vary(float score, float number){  //calculates design grade if scale varies
	
	float points;
	float sum_score = 0, sum_points = 0, avg = 0;
	
	int x=1, y=1; 
		do{
			cout << "Design ";
			cout << x;
			cout << " points: ";
			cin >> points;
			x++;
			cout << "Design ";
			cout << y;
			cout << " score: ";
			cin >> score;
			y++;
			sum_points = sum_points + points;
			sum_score = sum_score + score;
			avg = (sum_score / sum_points) * 100;
		}while(x<=number);
	
	return avg;

}
float design_choice(int choice, float number){  //determines what to do when user inputs an int if design scale varies or not
	
	float scale, score, d;

	if (choice == 0){
		cout << "Out of how many points?: ";
		cin >> scale;
		cout << endl;
	
		d = calc_design(score, scale, number);
		cout << "Your Design average is: " << d << endl << endl;
		return d;
	}
	if (choice == 1){
		d = calc_design_vary(score, number);
		cout << "Your Design average is: " << d << endl << endl;
		return d;
	}
}
float design(){  //calculates design grade

	int choice;
	float number, design_c;

	cout << "How many designs?: ";
	cin >> number;
		
	cout << "Do the point values vary? (0: No, 1: Yes): ";
	cin >> choice;
	cout << endl;

	design_c = design_choice(choice, number);
	return design_c;
}
float calc_critique(float score, float scale, float number){  //calculates critique grade if scale doesn't vary

	float sum = 0;
	float avg = 0;
	
	int x=1;
		do{
			cout << "Critique ";
			cout << x;
			cout << " score: ";
			cin >> score;
			x++;
			sum = sum + score;
			avg = (sum / (scale * number)) * 100;
		}while(x<=number);

	return avg;
}
float calc_critique_vary(float score, float number){  //calculates critique grade if scale varies
	float points;
	float sum_score = 0, sum_points = 0, avg = 0;
	int x=1, y=1;
		do{
			cout << "Critique "; 
			cout << x;
			cout << " points: ";
			cin >> points;
			x++;
			cout << "Critique ";
			cout << y;
			cout << " score: ";
			cin >> score;
			y++;
			sum_points = sum_points + points;
			sum_score = sum_score + score;
			avg = (sum_score / sum_points) * 100;
		}while(x<=number);
	return avg;
}
float critique_choice(int choice, float number){  //determines what to do when user inputs an int if critique scale varies or not
	
	float scale, score, c;

	if (choice == 0){
		cout << "Out of how many points?: ";
		cin >> scale;
		cout << endl;
	
		c = calc_critique(score, scale, number);
		cout << "Your Critique average is: " << c << endl << endl;
		return c;
	}
	if (choice == 1){
		c = calc_critique_vary(score, number);
		cout << "Your Critique average is: " << c << endl << endl;
		return c;
	}
}
float critique(){  //calculates critique grade

	int choice;
	float number, critique_c;

	cout << "How many critiques?: ";
	cin >> number;
		
	cout << "Do the point values vary? (0: No, 1: Yes): ";
	cin >> choice;
	cout << endl;

	critique_c = critique_choice(choice, number);
	return critique_c;
}
float quiz_weight(){  //determines quiz weight

	float weight1 = 0;

	cout << "What is each category weighted? (out of 100)" << endl;
	
	cout << "Quiz Weight: ";
	cin >> weight1;
	cout << endl;
	return weight1;
}
float design_weight(){  //determines design weight

	float weight2 = 0;

	cout << "Design Weight: ";
	cin >> weight2;
	cout << endl;
	return weight2;
}
float critique_weight(){  //determines critique weight

	float weight3 = 0;

	cout << "Critique Weight: ";
	cin >> weight3;
	cout << endl;
	return weight3;
}
float recitation(){  //calculates recitation grade
	
	float weight1 = 0, weight2 = 0, weight3 = 0, recitation_grade, q, d, c;
	
	weight1 = quiz_weight();
	weight2 = design_weight();
	weight3 = critique_weight();
	
	if(weight1 > 0)
		q = quiz();
	if(weight2 > 0)
		d = design();
	if(weight3 > 0)
		c = critique();

	recitation_grade = ((q * weight1) + (d * weight2) + (c * weight3)) / (weight1 + weight2 + weight3);
	cout << "Your Recitation average is: " << recitation_grade << endl;
	return recitation_grade;
}
float calc_test(float score, float scale, float number){  //calculates test grade if scale doesn't vary

	float sum = 0;
	float avg = 0;
	
	int x=1;
		do{
			cout << "Test ";
			cout << x;
			cout << " score: ";
			cin >> score;
			x++;
			sum = sum + score;
			avg = (sum / (scale * number)) * 100;
		}while(x<=number);

	return avg;
}
float calc_test_vary(float score, float number){  //calculates test grade if scale varies
	float points;
	float sum_score = 0, sum_points = 0, avg = 0;
	int x=1, y=1;
		do{
			cout << "Test ";
			cout << x;
			cout << " points: ";
			cin >> points;
			x++;
			cout << "Test ";
			cout << y;
			cout << " score: ";
			cin >> score;
			y++;
			sum_points = sum_points + points;
			sum_score = sum_score + score;
			avg = (sum_score / sum_points) * 100;
		}while(x<=number);
	return avg;
}
float test_choice(int choice, float number){  //determines what to do when user inputs an int if test scale varies or not
	
	float scale, score, t;

	if (choice == 0){
		cout << "Out of how many points?: ";
		cin >> scale;
		cout << endl;

		t = calc_test(score, scale, number);
		cout << "Your Test average is: " << t << endl << endl;
		return t;
	}
	if (choice == 1){
		t = calc_test_vary(score, number);
		cout << "Your Assignment average is: " << t << endl << endl;	
		return t;
	}
}
float test(){  //calculates test grade
	
	int choice;
	float number, test_c;

	cout << "How many Tests?" << endl;
	cin >> number;
		
	cout << "Do the point values vary? (0: No, 1: Yes): ";
	cin >> choice;
	cout << endl;

	test_c = test_choice(choice, number);
	return test_c;
}
float lab_weight(){  //determines lab weight

	float lw = 0;

	cout << "What is each category weighted? (out of 100)" << endl;
	
	cout << "Lab Weight: ";
	cin >> lw;
	cout << endl;
	return lw;
}
float assignment_weight(){  //determines assignment weight

	float aw = 0;

	cout << "Assignment Weight: ";
	cin >> aw;
	cout << endl;
	return aw;
}
float recitation_weight(){  //determines recitation weight

	float rw = 0;

	cout << "Recitation Weight: ";
	cin >> rw;
	cout << endl;
	return rw;
}
float test_weight(){  //determines test weight

	float tw = 0;

	cout << "Test Weight: ";
	cin >> tw;
	cout << endl;
	return tw;
}
float the_class(){  //calculates grade for the class
	
	float lw = 0, aw = 0, rw = 0, tw = 0, class_grade, l, a, r, t;
	
	lw = lab_weight();
	aw = assignment_weight();
	rw = recitation_weight();
	tw = test_weight();
	
	if(lw > 0)
		l = labs();
	if(aw > 0)
		a = assignments();
	if(rw > 0)
		r = recitation();
	if(tw > 0)
		t = test();

	class_grade = ((l * lw) + (a * aw) + (r * rw) + (t * tw)) / (lw + aw + rw + tw);
	cout << "Your Class average is: " << class_grade << endl;
	return class_grade;
}


int main(){

	int choice;

	cout << "Would you like to calculate an average for 1: Labs, 2: Assignments, 3: Recitations, 4: Tests, 5: The Class? (0 to quit)" << endl;
	cin >> choice;

	if (choice == 1)
		labs();  //calls labs function to calc lab grade

	if (choice == 2)
		assignments();  //calls assignments function to calc assignment grade

	if (choice == 3)
		recitation();  //calls recitaion function to calc recitation grade

	if (choice == 4)
		test();  //calls test function to calc test grade

	if (choice == 5)
		the_class();  //calls the class function to calc the class grade

	if (choice == 0)
		return 0;  //gets out of function if choice == 0
		
	return 0;
}
