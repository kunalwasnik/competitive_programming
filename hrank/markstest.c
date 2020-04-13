    //Complete the following function.

    int marks_summation(int* marks, int n, char g) {
      //Write your code here.int result=0;
    int i;
        int result = 0;
    if (g=='m')
    {
        for(i = 0;i<n;i++){
            if(i%2 == 0)
                result = result + marks[i];

        }

    }else
    {

        for(i = 0;i<n;i++){
            if(i%2 != 0)
                result = result + marks[i];

        }



    }
    return result;
    }
