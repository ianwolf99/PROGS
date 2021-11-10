#include <stdio.h>

struct student 
{
	char name;
	int address;
	int telephone;
	char Adm;
	int courses;
	float fees;
	char courses;
};

int main()
{
	struct student details;
	void PrintStudent(struct student);

	details.name = "ian Duncan";
	details.address = 22;
	details.telephone = +254740930221;
	details.Adm = "SCT-253-016/2018";
	details.courses = 2;
	details.fees = 147;
	details.courses = "Aplied Physics and Computer Science";

	PrintStudent(details);

}
void PrintStudent(struct student d){
	printf("%d/%d/%d/%d/%d/%d/%d\n", d.name, d.address, d.telephone, d.Adm, d.Courses, d.fees,d.courses  );
}
