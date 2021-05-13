#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>
void main()
{

    int result,ch;
    char a[20];
    char b[20];
    char c[10]="admin";
    void chennai();
    void mumbai();
    void delhi();
    HOMEPAGE:
    printf("login:");
    scanf("%s",a);
    printf("password:");
    scanf("%s",b);
    result=strcmp(b,c);
    if(result==0)
    {
        goto detail;
    }
    else
    {
        printf("\n--------------------------------------------------------\n");
        printf("\n\t\tWRONG PASSWARD!\n");
        printf("\n--------------------------------------------------------\n");
        goto HOMEPAGE;
    }

    detail:
    printf("0.CHENNAI\n");
    printf("1.MUMBAI\n");
    printf("2.DELHI\n");
    reswitch:
    printf("Enter the location number:\n");
    scanf("%d",&ch);
    if(ch>2)
    {
        printf("city not available:\n");
        goto reswitch;
    }
    switch(ch)
    {
        case 0:
        chennai();
        case 1:
        mumbai();
        case 2:
        delhi();
    }

}//main braket
void chennai()
{
    int name,n,m,p,c,i=0,j=0,k=0,d,e,f,x,y,z,t,r,s;
    printf("\n0.ACCORD");
    printf("\n1.HITON");
    printf("\n2.leela");
    hotel:
    printf("\nEnter the hotel no:");
    scanf("%d",&name);
    if(name>2)
    {
        printf("\nhotel is not available");
        goto hotel;
    }
    switch(name)
    {
        case 0:
        printf("\nhow many rooms you want in hotel Accord:");
        scanf("%d",&n);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        namel:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto namel;
        }
        switch(c)
        {
            case 0:
                {
            i=n*8000;
            printf("%d",i);
            break;
                }
            case 1:
                {
            j=n*5000;
            printf("%d",j);
            break;
                }
            case 2:
                {
            k=n*200;
            printf("%d",k);
            break;
                }
            goto conlsion;
        }
        conlsion:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&d);
        if(d==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
        case 1:
        printf("\nhow many rooms you want in hotel hiton:");
        scanf("%d",&m);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        naml:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto naml;
        }
        switch(c)
        {
            case 0:
                {


            x=m*6000;
            printf("%d",x);
            break;
                }
            case 1:
                {


            y=m*3000;
            printf("%d",y);
            break;

                }
            case 2:
                {


            z=m*1000;
            printf("%d",z);
            break;
                }

        goto concluion;
        }
        concluion:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&e);
        if(e==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
        case 2:
        printf("\nhow many rooms you want in hotel leela:");
        scanf("%d",&p);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        nal:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto nal;
        }
        switch(c)
        {
            case 0:
                {


            t=p*9000;
            printf("%d",t);
            break;
                }
            case 1:
                {


            r=p*7000;
            printf("%d",r);
            break;
                }
            case 2:
                {


            s=p*4000;
            printf("%d",s);
            break;

                }
                goto conclusin;
        }
        conclusin:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&f);
        if(f==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
    }
}
void mumbai()
{
    int name,n,m,p,c,i=0,j=0,k=0,d,e,f,x,y,z,t,r,s;
    printf("\n0.Altas");
    printf("\n1.Hindu");
    printf("\n2.oya");
    hotel:
    printf("\nEnter the hotel no:");
    scanf("%d",&name);
    if(name>2)
    {
        printf("\nhotel is not available");
        goto hotel;
    }
    switch(name)
    {
        case 0:
        printf("\nhow many rooms you want in hotel Altas:");
        scanf("%d",&n);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        namel:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto namel;
        }
        switch(c)
        {
            case 0:
                {
            i=n*8000;
            printf("%d",i);
            break;
                }
            case 1:
                {
            j=n*5000;
            printf("%d",j);
            break;
                }
            case 2:
                {
            k=n*200;
            printf("%d",k);
            break;
                }
            goto conlsion;
        }
        conlsion:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&d);
        if(d==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
        case 1:
        printf("\nhow many rooms you want in hotel hindu:");
        scanf("%d",&m);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        naml:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto naml;
        }
        switch(c)
        {
            case 0:
                {


            x=m*6000;
            printf("%d",x);
            break;
                }
            case 1:
                {


            y=m*3000;
            printf("%d",y);
            break;

                }
            case 2:
                {


            z=m*1000;
            printf("%d",z);
            break;
                }

        goto concluion;
        }
        concluion:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&e);
        if(e==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
        case 2:
        printf("\nhow many rooms you want in hotel oya:");
        scanf("%d",&p);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        nal:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto nal;
        }
        switch(c)
        {
            case 0:
                {


            t=p*9000;
            printf("%d",t);
            break;
                }
            case 1:
                {


            r=p*7000;
            printf("%d",r);
            break;
                }
            case 2:
                {


            s=p*4000;
            printf("%d",s);
            break;

                }
                goto conclusin;
        }
        conclusin:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&f);
        if(f==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
    }



}
void delhi()
{
    int name,n,m,p,c,i=0,j=0,k=0,d,e,f,x,y,z,t,r,s;
    printf("\n0.Alto");
    printf("\n1.bluestar");
    printf("\n2.metro");
    hotel:
    printf("\nEnter the hotel no:");
    scanf("%d",&name);
    if(name>2)
    {
        printf("\nhotel is not available");
        goto hotel;
    }
    switch(name)
    {
        case 0:
        printf("\nhow many rooms you want in hotel Alto:");
        scanf("%d",&n);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        namel:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto namel;
        }
        switch(c)
        {
            case 0:
                {
            i=n*8000;
            printf("%d",i);
            break;
                }
            case 1:
                {
            j=n*5000;
            printf("%d",j);
            break;
                }
            case 2:
                {
            k=n*200;
            printf("%d",k);
            break;
                }
            goto conlsion;
        }
        conlsion:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&d);
        if(d==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
        case 1:
        printf("\nhow many rooms you want in hotel bluestar:");
        scanf("%d",&m);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        naml:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto naml;
        }
        switch(c)
        {
            case 0:
                {


            x=m*6000;
            printf("%d",x);
            break;
                }
            case 1:
                {


            y=m*3000;
            printf("%d",y);
            break;

                }
            case 2:
                {


            z=m*1000;
            printf("%d",z);
            break;
                }

        goto concluion;
        }
        concluion:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&e);
        if(e==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
        case 2:
        printf("\nhow many rooms you want in hotel metro:");
        scanf("%d",&p);
        printf("\n0.ROYAL");
        printf("\n1.GENERAL");
        printf("\n2.ECONOMY");
        nal:
        printf("\nwhich class of rooms do you want to book:");
        scanf("%d",&c);
        if(name>2)
        {
        printf("\nnot other option");
        goto nal;
        }
        switch(c)
        {
            case 0:
                {


            t=p*9000;
            printf("%d",t);
            break;
                }
            case 1:
                {


            r=p*7000;
            printf("%d",r);
            break;
                }
            case 2:
                {


            s=p*4000;
            printf("%d",s);
            break;

                }
                goto conclusin;
        }
        conclusin:
        printf("\n1.confrim");
        printf("\n2.dismiss");
        printf("\nconfrim or dismiss the booking:");
        scanf("%d",&f);
        if(f==1)
        {
            printf("\n--------------------------------------------------------\n");
            printf("\n\t\tHOTEL SUCCESSFULLY BOOKED");
            printf("\n--------------------------------------------------------\n");
            exit(0);
        }
        else
        {
            exit(0);
        }
    }

}



