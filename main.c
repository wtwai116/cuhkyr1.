/***********************************************************************************
 * YOU MAY COPY-AND-PASTE YOUR C SOURCE FILE main.c FROM YOUR Code::Blocks PROJECT *
 ***********************************************************************************/

/**
 * ENGG1110 Problem Solving by Programming
 *
 * Project Phase 1
 *
 * I declare that the assignment here submitted is original
 * except for source material explicitly acknowledged,
 * and that the same or closely related material has not been
 * previously submitted for another course.
 * I also acknowledge that I am aware of University policy and
 * regulations on honesty in academic work, and of the disciplinary
 * guidelines and procedures applicable to breaches of such
 * policy and regulations, as contained in the website.
 *
 * University Guideline on Academic Honesty:
 *   http://www.cuhk.edu.hk/policy/academichonesty/
 *
 * Student Name : Wong Tsz Wai <fill in yourself>
 * Student ID   : 1155108167 <fill in yourself>
 * Class/Section: ENGG1110A <fill in yourself>
 * Date         : 27/9/2017 <fill in yourself>
 */

/* include header file */
#include <stdio.h>
#include <stdlib.h>
#include <math.h>


int main()
{
    double v1,v2,v3;
    printf("Math Tool Box\n");
    printf("/\\/\\/\\/\\/\\/\\/\n");
    printf("Phase 1\n\n");
    printf("Input a 2-element vector v:\n");
    scanf("%lf %lf",&v1,&v2);

    printf("\n");
    printf("Your 2-element vector v:\n");
    printf("/               \\\n");
    printf("|  %+.2f  %+.2f |\n",v1,v2);
    printf("\\               /\n\n");

    v3 = sqrt(v1*v1 + v2*v2);

    printf("Length of vector v = |v| = %.6f\n\n",v3);

    //vector part ended

    //matrix
    double m1,m2,m3,m4,m5,mi1,mi2,mi3,mi4,mi;
    printf("Input a 2x2 matrix M:\n\n");
    scanf("%lf   %lf\n%lf   %lf",&m1,&m2,&m3,&m4);

    printf("Your 2x2 matrix M:\n");
    printf("/               \\\n");
    printf("|  %+.2f  %+.2f |\n",m1,m2);
    printf("|  %+.2f  %+.2f |\n",m3,m4);
    printf("\\               /\n\n");

    m5 = (m1 * m4 - m2 * m3);
    printf("Determinant(M) = %.6f\n\n",m5);
    //end determinant(M)

    printf("Inverse(M):\n");
    if((sqrt(pow(m5,2)) <= pow(10,-6)) && (m5 = 0)){
    printf("M has NO inverse!\n\n");

    }
    else{
        mi  = 1/m5;
        mi1 = m1 * mi;
        mi2 = mi * -m2;
        mi3 = -m3 * mi;
        mi4 = mi * m4;

        printf("/               \\\n");
        printf("|  %+.2f  %+.2f |\n",mi4,mi2);
        printf("|  %+.2f  %+.2f |\n",mi3,mi1);
        printf("\\               /\n\n");

            }
        //end inverse
    double w1,w2,w3,vw;
    w1 =  m1 * v1 + m3 * v2;
    w2 =  m2 * v1 + m4 * v2;
    w3 =  sqrt(w1*w1 + w2*w2);
    printf("Multiply vector v with matrix M, yield vector w:\n");
    printf("                  /       M       \\\n");
    printf("                  |  %+.2f  %+.2f |\n",m1,m2);
    printf("                  |  %+.2f  %+.2f |\n",m3,m4);
    printf("                  \\               /\n");
    //vector+W
    printf("/               \\ /               \\\n");
    printf("|  %+.2f  %+.2f | |  %+.2f  %+.2f |\n",v1,v2,w1,w2);
    printf("\\       v       / \\       w       /\n\n");
    //length of vector
    printf("Length of vector w = |w| = %.6f\n\n",w3);
    //dot
    vw = v1 * w1 + v2 * w2;
    printf("Dot product of vector v with vector w:\n");
    printf("/               \\   /               \\\n");
    printf("|  %+.2f  %+.2f | . |  %+.2f  %+.2f | = %.6f\n",v1,v2,w1,w2,vw);
    printf("\\       v       /   \\       w       /\n\n");
    printf(" \n");

    //angle page2
    double a,r1,r2,r3,r4,rd;
    if(sqrt(pow(v3,2)) == 0 || sqrt(pow(w3,2)) ==0){
        printf("Angle between vector V and vector w is UNDEFINED!\n\n");
    }
    else{
    a = acos(vw / (sqrt(pow(v3,2)) * sqrt(pow(w3,2))));
    printf("                                           /  (v.w)  \\\n");
    printf("Angle between vector v and vector w = acos | ------- | = %.6f radian\n",a);
    printf("                                           \\ |v| |w| /\n\n");

    }
    r1 = w1 * v1;
    r2 = w2 * v1;
    r3 = w1 * v2;
    r4 = w2 * v2;
    //multiply
    printf("Multiply vector v with vector w, yield matrix R:\n");
    printf("           /       w       \\\n");
    printf("           |  %+.2f  %+.2f |\n",w1,w2);
    printf("           \\               /\n");
    printf("/        \\ /               \\\n");
    printf("|  %+.2f | |  %+.2f  %+.2f |\n",v1,r1,r2);
    printf("|  %+.2f | | %+.2f %+.2f |\n",v2,r3,r4);
    printf("\\    v   / \\       R       /\n\n");

    rd = (v1 * r1)*(v2 * r4) - (v1 * r2)*(v2 * r3);

    printf("Determinant(R) = %.6f\n\n",rd);
    //ad matrix i

    double i1,ir,i4;
    i1 = 1 + r1;
    i4 = 1 + r4;
    ir = i1*i4 - r2*r3;

    printf("Add identity matrix I to matrix R, replacing matrix R, i.e. R += I:\n");
    printf("/               \\\n");
    printf("|  %+.2f  %+.2f |\n",i1,r2);
    printf("| %+.2f %+.2f |\n",r3,i4);
    printf("\\               /\n\n");

    printf("Determinant(R) = %.6f\n\n",ir);
    //inverse(R)
    double ii1,ii2,ii3,ii4,iir;
    printf("Inverse(R), yields matrix RR:\n");
    ii1 = i1 / ir;
    ii2 = -r2 / ir;
    ii3 = -r3 / ir;
    ii4 = i4 / ir;
    printf("/               \\\n");
    printf("|  %+.2f  %+.2f |\n",ii4,ii2);
    printf("|  %+.2f  %+.2f |\n",ii3,ii1);
    printf("\\               /\n\n");
    iir = ii4*ii1 - ii3*ii2;
    printf("Determinant(RR) = %.6f\n\n",iir);

    //multiply matrix
    double rr1,rr2,rr3,rr4;
    rr1 = ii4*i1 + r3*ii2;
    rr2 = r2*ii4 + ii2*i4;
    rr3 = ii3*i1 + ii1*r3;
    rr4 = ii3*r2 + ii1*i4;
    printf("Multiply matrix R with matrix RR:\n");
    printf("/               \\\n");
    printf("|  %+.2f  %+.2f |\n",rr1,rr2);
    printf("|  %+.2f  %+.2f |\n",rr3,rr4);
    printf("\\               /\n\n");

    printf("Multiply matrix RR with matrix R:\n");
    printf("/               \\\n");
    printf("|  %+.2f  %+.2f |\n",rr1,rr2);
    printf("|  %+.2f  %+.2f |\n",rr3,rr4);
    printf("\\               /\n");

    return 0;
}

