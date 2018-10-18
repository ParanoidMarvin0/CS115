int main ()
{
    Student stu[NUM_STU];
    int i;

    for (int i = 0; i<NUM_STU; i++)
    {
         stu[i]=readStudent();
         cin.ignore(256,'\n'); //why do this?
    }
    for (int i = 0; i<NUM_STU; i++)
    {
         printStudent(stu[i]);
    }
    return 0;
}