#include<iostream>
#include <vector>
using namespace std;

void mtx3x3(int cho) {
    int mtx1[9], mtx2[9], i;
    cout<<"\nEnter value for the First Matrix\n";
    for(i=0; i<9; i++) {
        if(i==0) {
            cout<<"[0,0] = "; cin>>mtx1[i];
        } else if(i==1) {
            cout<<"[0,1] = "; cin>>mtx1[i];
        } else if(i==2) {
            cout<<"[0,2] = "; cin>>mtx1[i];
        } else if(i==3) {
            cout<<"[1,0] = "; cin>>mtx1[i];
        } else if(i==4) {
            cout<<"[1,1] = "; cin>>mtx1[i];
        } else if(i==5) {
            cout<<"[1,2] = "; cin>>mtx1[i];
        } else if(i==6) {
            cout<<"[2,0] = "; cin>>mtx1[i];
        } else if(i==7) {
            cout<<"[2,1] = "; cin>>mtx1[i];
        } else if(i==8) {
            cout<<"[2,2] = "; cin>>mtx1[i];
        }
    }
    
    cout<<"\nEnter value for the Second Matrix\n";
    for(i=0; i<9; i++) {
        if(i==0) {
            cout<<"[0,0] = "; cin>>mtx2[i];
        } else if(i==1) {
            cout<<"[0,1] = "; cin>>mtx2[i];
        } else if(i==2) {
            cout<<"[0,2] = "; cin>>mtx2[i];
        } else if(i==3) {
            cout<<"[1,0] = "; cin>>mtx2[i];
        } else if(i==4) {
            cout<<"[1,1] = "; cin>>mtx2[i];
        } else if(i==5) {
            cout<<"[1,2] = "; cin>>mtx2[i];
        } else if(i==6) {
            cout<<"[2,0] = "; cin>>mtx2[i];
        } else if(i==7) {
            cout<<"[2,1] = "; cin>>mtx2[i];
        } else if(i==8) {
            cout<<"[2,2] = "; cin>>mtx2[i];
        }
    }
    
    cout<<"\nThe First and the Second Matrix looks like this:\n";
        cout<<mtx1[0]<<"\t"<<mtx1[1]<<"\t"<<mtx1[2]<<"\t\t"
        <<mtx2[0]<<"\t"<<mtx2[1]<<"\t"<<mtx2[2]<<"\n";

        cout<<mtx1[3]<<"\t"<<mtx1[4]<<"\t"<<mtx1[5]<<"\t\t"
        <<mtx2[3]<<"\t"<<mtx2[4]<<"\t"<<mtx2[5]<<"\n";

        cout<<mtx1[6]<<"\t"<<mtx1[7]<<"\t"<<mtx1[8]<<"\t\t"
        <<mtx2[6]<<"\t"<<mtx2[7]<<"\t"<<mtx2[8]<<"\n";
    
    if (cho==1) {
        cout<<"\nResult of adding the First and the Second Matrix:\n";
        cout<<mtx1[0]+mtx2[0]<<"\t"<<mtx1[1]+mtx2[1]<<"\t"<<mtx1[2]+mtx2[2]<<"\n";
        cout<<mtx1[3]+mtx2[3]<<"\t"<<mtx1[4]+mtx2[4]<<"\t"<<mtx1[5]+mtx2[5]<<"\n";
        cout<<mtx1[6]+mtx2[6]<<"\t"<<mtx1[7]+mtx2[7]<<"\t"<<mtx1[8]+mtx2[8]<<"\n";
    } else if(cho==4){
        cout<<"\nResult of subtracting the First and the Second Matrix:\n";
        cout<<mtx1[0]-mtx2[0]<<"\t"<<mtx1[1]-mtx2[1]<<"\t"<<mtx1[2]-mtx2[2]<<"\n";
        cout<<mtx1[3]-mtx2[3]<<"\t"<<mtx1[4]-mtx2[4]<<"\t"<<mtx1[5]-mtx2[5]<<"\n";
        cout<<mtx1[6]-mtx2[6]<<"\t"<<mtx1[7]-mtx2[7]<<"\t"<<mtx1[8]-mtx2[8]<<"\n";
    } else if(cho == 7){
        cout<<"\nResult of multiplying the First and the Second Matrix:\n";
        int mul1, mul2, mul3, mul4, mul5, mul6, mul7, mul8, mul9;

        mul1 = mtx1[0]*mtx2[0] + mtx1[1]*mtx2[3] + mtx1[2]*mtx2[6];
        mul2 = mtx1[0]*mtx2[1] + mtx1[1]*mtx2[4] + mtx1[2]*mtx2[7];
        mul3 = mtx1[0]*mtx2[2] + mtx1[1]*mtx2[5] + mtx1[2]*mtx2[8];

        mul4 = mtx1[3]*mtx2[0] + mtx1[4]*mtx2[3] + mtx1[5]*mtx2[6];
        mul5 = mtx1[3]*mtx2[1] + mtx1[4]*mtx2[4] + mtx1[5]*mtx2[7];
        mul6 = mtx1[3]*mtx2[2] + mtx1[4]*mtx2[5] + mtx1[5]*mtx2[8];

        mul7 = mtx1[6]*mtx2[0] + mtx1[7]*mtx2[3] + mtx1[8]*mtx2[6];
        mul8 = mtx1[6]*mtx2[1] + mtx1[7]*mtx2[4] + mtx1[8]*mtx2[7];
        mul9 = mtx1[6]*mtx2[2] + mtx1[7]*mtx2[5] + mtx1[8]*mtx2[8];

        cout<<mul1<<"\t"<<mul2<<"\t"<<mul3<<"\n";
        cout<<mul4<<"\t"<<mul5<<"\t"<<mul6<<"\n";
        cout<<mul7<<"\t"<<mul8<<"\t"<<mul9<<"\n";
    }
}

void mtx4x4(int cho) {
    int mtx1[16], mtx2[16], i;
    cout<<"\nEnter value for the First Matrix\n";
    for(i=0; i<16; i++) {
        if(i==0) {
            cout<<"[0,0] = "; cin>>mtx1[i];
        } else if(i==1) {
            cout<<"[0,1] = "; cin>>mtx1[i];
        } else if(i==2) {
            cout<<"[0,2] = "; cin>>mtx1[i];
        } else if(i==3) {
            cout<<"[0,3] = "; cin>>mtx1[i];
        } else if(i==4) {
            cout<<"[1,0] = "; cin>>mtx1[i];
        } else if(i==5) {
            cout<<"[1,1] = "; cin>>mtx1[i];
        } else if(i==6) {
            cout<<"[1,2] = "; cin>>mtx1[i];
        } else if(i==7) {
            cout<<"[1,3] = "; cin>>mtx1[i];
        } else if(i==8) {
            cout<<"[2,0] = "; cin>>mtx1[i];
        } else if(i==9) {
            cout<<"[2,1] = "; cin>>mtx1[i];
        } else if(i==10) {
            cout<<"[2,2] = "; cin>>mtx1[i];
        } else if(i==11) {
            cout<<"[2,3] = "; cin>>mtx1[i];
        } else if(i==12) {
            cout<<"[3,0] = "; cin>>mtx1[i];
        } else if(i==13) {
            cout<<"[3,1] = "; cin>>mtx1[i];
        } else if(i==14) {
            cout<<"[3,2] = "; cin>>mtx1[i];
        } else if(i==15) {
            cout<<"[3,3] = "; cin>>mtx1[i];
        }
    }
    
    cout<<"\nEnter value for the Second Matrix\n";
    for(i=0; i<16; i++) {
        if(i==0) {
            cout<<"[0,0] = "; cin>>mtx2[i];
        } else if(i==1) {
            cout<<"[0,1] = "; cin>>mtx2[i];
        } else if(i==2) {
            cout<<"[0,2] = "; cin>>mtx2[i];
        } else if(i==3) {
            cout<<"[0,3] = "; cin>>mtx2[i];
        } else if(i==4) {
            cout<<"[1,0] = "; cin>>mtx2[i];
        } else if(i==5) {
            cout<<"[1,1] = "; cin>>mtx2[i];
        } else if(i==6) {
            cout<<"[1,2] = "; cin>>mtx2[i];
        } else if(i==7) {
            cout<<"[1,3] = "; cin>>mtx2[i];
        } else if(i==8) {
            cout<<"[2,0] = "; cin>>mtx2[i];
        } else if(i==9) {
            cout<<"[2,1] = "; cin>>mtx2[i];
        } else if(i==10) {
            cout<<"[2,2] = "; cin>>mtx2[i];
        } else if(i==11) {
            cout<<"[2,3] = "; cin>>mtx2[i];
        } else if(i==12) {
            cout<<"[3,0] = "; cin>>mtx2[i];
        } else if(i==13) {
            cout<<"[3,1] = "; cin>>mtx2[i];
        } else if(i==14) {
            cout<<"[3,2] = "; cin>>mtx2[i];
        } else if(i==15) {
            cout<<"[3,3] = "; cin>>mtx2[i];
        }
    }
    
    cout<<"\nThe First and the Second Matrix looks like this:\n";
        cout<<mtx1[0]<<"\t"<<mtx1[1]<<"\t"<<mtx1[2]<<"\t"<<mtx1[3]<<"\t\t"
        <<mtx2[0]<<"\t"<<mtx2[1]<<"\t"<<mtx2[2]<<"\t"<<mtx2[3]<<"\n";

        cout<<mtx1[4]<<"\t"<<mtx1[5]<<"\t"<<mtx1[6]<<"\t"<<mtx1[7]<<"\t\t"
        <<mtx2[4]<<"\t"<<mtx2[5]<<"\t"<<mtx2[6]<<"\t"<<mtx2[7]<<"\n";

        cout<<mtx1[8]<<"\t"<<mtx1[9]<<"\t"<<mtx1[10]<<"\t"<<mtx1[11]<<"\t\t"
        <<mtx2[8]<<"\t"<<mtx2[9]<<"\t"<<mtx2[10]<<"\t"<<mtx2[11]<<"\n";

        cout<<mtx1[12]<<"\t"<<mtx1[13]<<"\t"<<mtx1[14]<<"\t"<<mtx1[15]<<"\t\t"
        <<mtx2[12]<<"\t"<<mtx2[13]<<"\t"<<mtx2[14]<<"\t"<<mtx2[15]<<"\n";
    
    if (cho==2) {
        cout<<"\nResult of adding the First and the Second Matrix:\n";
        cout<<mtx1[0]+mtx2[0]<<"\t"<<mtx1[1]+mtx2[1]<<"\t"<<mtx1[2]+mtx2[2]<<"\t"<<mtx1[3]+mtx2[3]<<"\n";
        cout<<mtx1[4]+mtx2[4]<<"\t"<<mtx1[5]+mtx2[5]<<"\t"<<mtx1[6]+mtx2[6]<<"\t"<<mtx1[7]+mtx2[7]<<"\n";
        cout<<mtx1[8]+mtx2[8]<<"\t"<<mtx1[9]+mtx2[9]<<"\t"<<mtx1[10]+mtx2[10]<<"\t"<<mtx1[11]+mtx2[11]<<"\n";
        cout<<mtx1[12]+mtx2[12]<<"\t"<<mtx1[13]+mtx2[13]<<"\t"<<mtx1[14]+mtx2[14]<<"\t"<<mtx1[15]+mtx2[15]<<"\n";
    } else if(cho==5){
        cout<<"\nResult of subtracting the First and the Second Matrix:\n";
        cout<<mtx1[0]-mtx2[0]<<"\t"<<mtx1[1]-mtx2[1]<<"\t"<<mtx1[2]-mtx2[2]<<"\t"<<mtx1[3]-mtx2[3]<<"\n";
        cout<<mtx1[4]-mtx2[4]<<"\t"<<mtx1[5]-mtx2[5]<<"\t"<<mtx1[6]-mtx2[6]<<"\t"<<mtx1[7]-mtx2[7]<<"\n";
        cout<<mtx1[8]-mtx2[8]<<"\t"<<mtx1[9]-mtx2[9]<<"\t"<<mtx1[10]-mtx2[10]<<"\t"<<mtx1[11]-mtx2[11]<<"\n";
        cout<<mtx1[12]-mtx2[12]<<"\t"<<mtx1[13]-mtx2[13]<<"\t"<<mtx1[14]-mtx2[14]<<"\t"<<mtx1[15]-mtx2[15]<<"\n";
    } else if(cho == 8){
        cout<<"\nResult of multiplying the First and the Second Matrix:\n";
        int mul1, mul2, mul3, mul4, mul5, mul6, mul7, mul8, mul9, mul10, mul11, mul12, mul13, mul14, mul15, mul16;

        mul1 = mtx1[0]*mtx2[0] + mtx1[1]*mtx2[4] + mtx1[2]*mtx2[8] + mtx1[3]*mtx2[12];
        mul2 = mtx1[0]*mtx2[1] + mtx1[1]*mtx2[5] + mtx1[2]*mtx2[9] + mtx1[3]*mtx2[13];
        mul3 = mtx1[0]*mtx2[2] + mtx1[1]*mtx2[6] + mtx1[2]*mtx2[10] + mtx1[3]*mtx2[14];
        mul4 = mtx1[0]*mtx2[3] + mtx1[1]*mtx2[7] + mtx1[2]*mtx2[11] + mtx1[3]*mtx2[15];

        mul5 = mtx1[4]*mtx2[0] + mtx1[5]*mtx2[4] + mtx1[6]*mtx2[8] + mtx1[7]*mtx2[12];
        mul6 = mtx1[4]*mtx2[1] + mtx1[5]*mtx2[5] + mtx1[6]*mtx2[9] + mtx1[7]*mtx2[13];
        mul7 = mtx1[4]*mtx2[2] + mtx1[5]*mtx2[6] + mtx1[6]*mtx2[10] + mtx1[7]*mtx2[14];
        mul8 = mtx1[4]*mtx2[3] + mtx1[5]*mtx2[7] + mtx1[6]*mtx2[11] + mtx1[7]*mtx2[15];

        mul9 = mtx1[8]*mtx2[0] + mtx1[9]*mtx2[4] + mtx1[10]*mtx2[8] + mtx1[11]*mtx2[12];
        mul10 = mtx1[8]*mtx2[1] + mtx1[9]*mtx2[5] + mtx1[10]*mtx2[9] + mtx1[11]*mtx2[13];
        mul11 = mtx1[8]*mtx2[2] + mtx1[9]*mtx2[6] + mtx1[10]*mtx2[10] + mtx1[11]*mtx2[14];
        mul12 = mtx1[8]*mtx2[3] + mtx1[9]*mtx2[7] + mtx1[10]*mtx2[11] + mtx1[11]*mtx2[15];

        mul13 = mtx1[12]*mtx2[0] + mtx1[13]*mtx2[4] + mtx1[14]*mtx2[8] + mtx1[15]*mtx2[12];
        mul14 = mtx1[12]*mtx2[1] + mtx1[13]*mtx2[5] + mtx1[14]*mtx2[9] + mtx1[15]*mtx2[13];
        mul15 = mtx1[12]*mtx2[2] + mtx1[13]*mtx2[6] + mtx1[14]*mtx2[10] + mtx1[15]*mtx2[14];
        mul16 = mtx1[12]*mtx2[3] + mtx1[13]*mtx2[7] + mtx1[14]*mtx2[11] + mtx1[15]*mtx2[15];

        cout<<mul1<<"\t"<<mul2<<"\t"<<mul3<<"\t"<<mul4<<"\n";
        cout<<mul5<<"\t"<<mul6<<"\t"<<mul7<<"\t"<<mul8<<"\n";
        cout<<mul9<<"\t"<<mul10<<"\t"<<mul11<<"\t"<<mul12<<"\n";
        cout<<mul13<<"\t"<<mul14<<"\t"<<mul15<<"\t"<<mul16<<"\n";
    }
}

void mtx5x5(int cho) {
    int mtx1[25], mtx2[25], i;
    cout<<"\nEnter value for the First Matrix\n";
    for(i=0; i<25; i++) {
        if(i==0) {
            cout<<"[0,0] = "; cin>>mtx1[i];
        } else if(i==1) {
            cout<<"[0,1] = "; cin>>mtx1[i];
        } else if(i==2) {
            cout<<"[0,2] = "; cin>>mtx1[i];
        } else if(i==3) {
            cout<<"[0,3] = "; cin>>mtx1[i];
        } else if(i==4) {
            cout<<"[0,4] = "; cin>>mtx1[i];
        } else if(i==5) {
            cout<<"[1,0] = "; cin>>mtx1[i];
        } else if(i==6) {
            cout<<"[1,1] = "; cin>>mtx1[i];
        } else if(i==7) {
            cout<<"[1,2] = "; cin>>mtx1[i];
        } else if(i==8) {
            cout<<"[1,3] = "; cin>>mtx1[i];
        } else if(i==9) {
            cout<<"[1,4] = "; cin>>mtx1[i];
        } else if(i==10) {
            cout<<"[2,0] = "; cin>>mtx1[i];
        } else if(i==11) {
            cout<<"[2,1] = "; cin>>mtx1[i];
        } else if(i==12) {
            cout<<"[2,2] = "; cin>>mtx1[i];
        } else if(i==13) {
            cout<<"[2,3] = "; cin>>mtx1[i];
        } else if(i==14) {
            cout<<"[2,4] = "; cin>>mtx1[i];
        } else if(i==15) {
            cout<<"[3,0] = "; cin>>mtx1[i];
        } else if(i==16) {
            cout<<"[3,1] = "; cin>>mtx1[i];
        } else if(i==17) {
            cout<<"[3,2] = "; cin>>mtx1[i];
        } else if(i==18) {
            cout<<"[3,3] = "; cin>>mtx1[i];
        } else if(i==19) {
            cout<<"[3,4] = "; cin>>mtx1[i];
        } else if(i==20) {
            cout<<"[4,0] = "; cin>>mtx1[i];
        } else if(i==21) {
            cout<<"[4,1] = "; cin>>mtx1[i];
        } else if(i==22) {
            cout<<"[4,2] = "; cin>>mtx1[i];
        } else if(i==23) {
            cout<<"[4,3] = "; cin>>mtx1[i];
        } else if(i==24) {
            cout<<"[4,4] = "; cin>>mtx1[i];
        }
    }
    
    cout<<"\nEnter value for the Second Matrix\n";
    for(i=0; i<25; i++) {
        if(i==0) {
            cout<<"[0,0] = "; cin>>mtx2[i];
        } else if(i==1) {
            cout<<"[0,1] = "; cin>>mtx2[i];
        } else if(i==2) {
            cout<<"[0,2] = "; cin>>mtx2[i];
        } else if(i==3) {
            cout<<"[0,3] = "; cin>>mtx2[i];
        } else if(i==4) {
            cout<<"[0,4] = "; cin>>mtx2[i];
        } else if(i==5) {
            cout<<"[1,0] = "; cin>>mtx2[i];
        } else if(i==6) {
            cout<<"[1,1] = "; cin>>mtx2[i];
        } else if(i==7) {
            cout<<"[1,2] = "; cin>>mtx2[i];
        } else if(i==8) {
            cout<<"[1,3] = "; cin>>mtx2[i];
        } else if(i==9) {
            cout<<"[1,4] = "; cin>>mtx2[i];
        } else if(i==10) {
            cout<<"[2,0] = "; cin>>mtx2[i];
        } else if(i==11) {
            cout<<"[2,1] = "; cin>>mtx2[i];
        } else if(i==12) {
            cout<<"[2,2] = "; cin>>mtx2[i];
        } else if(i==13) {
            cout<<"[2,3] = "; cin>>mtx2[i];
        } else if(i==14) {
            cout<<"[2,4] = "; cin>>mtx2[i];
        } else if(i==15) {
            cout<<"[3,0] = "; cin>>mtx2[i];
        } else if(i==16) {
            cout<<"[3,1] = "; cin>>mtx2[i];
        } else if(i==17) {
            cout<<"[3,2] = "; cin>>mtx2[i];
        } else if(i==18) {
            cout<<"[3,3] = "; cin>>mtx2[i];
        } else if(i==19) {
            cout<<"[3,4] = "; cin>>mtx2[i];
        } else if(i==20) {
            cout<<"[4,0] = "; cin>>mtx2[i];
        } else if(i==21) {
            cout<<"[4,1] = "; cin>>mtx2[i];
        } else if(i==22) {
            cout<<"[4,2] = "; cin>>mtx2[i];
        } else if(i==23) {
            cout<<"[4,3] = "; cin>>mtx2[i];
        } else if(i==24) {
            cout<<"[4,4] = "; cin>>mtx2[i];
        }
    }

    cout<<"\nThe First and the Second Matrix looks like this:\n";
        cout<<mtx1[0]<<"\t"<<mtx1[1]<<"\t"<<mtx1[2]<<"\t"<<mtx1[3]<<"\t"<<mtx1[4]<<"\t\t"
        <<mtx2[0]<<"\t"<<mtx2[1]<<"\t"<<mtx2[2]<<"\t"<<mtx2[3]<<"\t"<<mtx2[4]<<"\n";

        cout<<mtx1[5]<<"\t"<<mtx1[6]<<"\t"<<mtx1[7]<<"\t"<<mtx1[8]<<"\t"<<mtx1[9]<<"\t\t"
        <<mtx2[5]<<"\t"<<mtx2[6]<<"\t"<<mtx2[7]<<"\t"<<mtx2[8]<<"\t"<<mtx2[9]<<"\n";

        cout<<mtx1[10]<<"\t"<<mtx1[11]<<"\t"<<mtx1[12]<<"\t"<<mtx1[13]<<"\t"<<mtx1[14]<<"\t\t"
        <<mtx2[10]<<"\t"<<mtx2[11]<<"\t"<<mtx2[12]<<"\t"<<mtx2[13]<<"\t"<<mtx2[14]<<"\n";

        cout<<mtx1[15]<<"\t"<<mtx1[16]<<"\t"<<mtx1[17]<<"\t"<<mtx1[18]<<"\t"<<mtx1[19]<<"\t\t"
        <<mtx2[15]<<"\t"<<mtx2[16]<<"\t"<<mtx2[17]<<"\t"<<mtx2[18]<<"\t"<<mtx2[9]<<"\n";

        cout<<mtx1[20]<<"\t"<<mtx1[21]<<"\t"<<mtx1[22]<<"\t"<<mtx1[23]<<"\t"<<mtx1[24]<<"\t\t"
        <<mtx2[20]<<"\t"<<mtx2[21]<<"\t"<<mtx2[22]<<"\t"<<mtx2[23]<<"\t"<<mtx2[24]<<"\n";
    
    if (cho==3) {
        cout<<"\nResult of adding the First and the Second Matrix:\n";
        cout<<mtx1[0]+mtx2[0]<<"\t"<<mtx1[1]+mtx2[1]<<"\t"<<mtx1[2]+mtx2[2]<<"\t"<<mtx1[3]+mtx2[3]<<"\t"<<mtx1[4]+mtx2[4]<<"\n";
        cout<<mtx1[5]+mtx2[5]<<"\t"<<mtx1[6]+mtx2[6]<<"\t"<<mtx1[7]+mtx2[7]<<"\t"<<mtx1[8]+mtx2[8]<<"\t"<<mtx1[9]+mtx2[9]<<"\n";
        cout<<mtx1[10]+mtx2[10]<<"\t"<<mtx1[11]+mtx2[11]<<"\t"<<mtx1[12]+mtx2[12]<<"\t"<<mtx1[13]+mtx2[13]<<"\t"<<mtx1[14]+mtx2[14]<<"\n";
        cout<<mtx1[15]+mtx2[15]<<"\t"<<mtx1[16]+mtx2[16]<<"\t"<<mtx1[17]+mtx2[17]<<"\t"<<mtx1[18]+mtx2[18]<<"\t"<<mtx1[19]+mtx2[19]<<"\n";
        cout<<mtx1[20]+mtx2[20]<<"\t"<<mtx1[21]+mtx2[21]<<"\t"<<mtx1[22]+mtx2[22]<<"\t"<<mtx1[23]+mtx2[23]<<"\t"<<mtx1[24]+mtx2[24]<<"\n";
    } else if(cho==6){
        cout<<"\nResult of subtracting the First and the Second Matrix:\n";
        cout<<mtx1[0]-mtx2[0]<<"\t"<<mtx1[1]-mtx2[1]<<"\t"<<mtx1[2]-mtx2[2]<<"\t"<<mtx1[3]-mtx2[3]<<"\t"<<mtx1[4]-mtx2[4]<<"\n";
        cout<<mtx1[5]-mtx2[5]<<"\t"<<mtx1[6]-mtx2[6]<<"\t"<<mtx1[7]-mtx2[7]<<"\t"<<mtx1[8]-mtx2[8]<<"\t"<<mtx1[9]-mtx2[9]<<"\n";
        cout<<mtx1[10]-mtx2[10]<<"\t"<<mtx1[11]-mtx2[11]<<"\t"<<mtx1[12]-mtx2[12]<<"\t"<<mtx1[13]-mtx2[13]<<"\t"<<mtx1[14]-mtx2[14]<<"\n";
        cout<<mtx1[15]-mtx2[15]<<"\t"<<mtx1[16]-mtx2[16]<<"\t"<<mtx1[17]-mtx2[17]<<"\t"<<mtx1[18]-mtx2[18]<<"\t"<<mtx1[19]-mtx2[19]<<"\n";
        cout<<mtx1[20]-mtx2[20]<<"\t"<<mtx1[21]-mtx2[21]<<"\t"<<mtx1[22]-mtx2[22]<<"\t"<<mtx1[23]-mtx2[23]<<"\t"<<mtx1[24]-mtx2[24]<<"\n";
    } else if(cho == 9){
        cout<<"\nResult of multiplying the First and the Second Matrix:\n";
        int mul1, mul2, mul3, mul4, mul5, mul6, mul7, mul8, mul9, mul10, mul11, mul12, mul13, mul14, mul15, mul16, mul17, mul18, mul19, mul20, mul21, mul22, mul23, mul24, mul25;

        mul1 = mtx1[0]*mtx2[0] + mtx1[1]*mtx2[5] + mtx1[2]*mtx2[10] + mtx1[3]*mtx2[15] + mtx1[4]*mtx2[20];
        mul2 = mtx1[0]*mtx2[1] + mtx1[1]*mtx2[6] + mtx1[2]*mtx2[11] + mtx1[3]*mtx2[16] + mtx1[4]*mtx2[21];
        mul3 = mtx1[0]*mtx2[2] + mtx1[1]*mtx2[7] + mtx1[2]*mtx2[12] + mtx1[3]*mtx2[17] + mtx1[4]*mtx2[22];
        mul4 = mtx1[0]*mtx2[3] + mtx1[1]*mtx2[8] + mtx1[2]*mtx2[13] + mtx1[3]*mtx2[18] + mtx1[4]*mtx2[23];
        mul5 = mtx1[0]*mtx2[4] + mtx1[1]*mtx2[9] + mtx1[2]*mtx2[14] + mtx1[3]*mtx2[19] + mtx1[4]*mtx2[24];

        mul6 = mtx1[5]*mtx2[0] + mtx1[6]*mtx2[5] + mtx1[7]*mtx2[10] + mtx1[8]*mtx2[15] + mtx1[9]*mtx2[20];
        mul7 = mtx1[5]*mtx2[1] + mtx1[6]*mtx2[6] + mtx1[7]*mtx2[11] + mtx1[8]*mtx2[16] + mtx1[9]*mtx2[21];
        mul8 = mtx1[5]*mtx2[2] + mtx1[6]*mtx2[7] + mtx1[7]*mtx2[12] + mtx1[8]*mtx2[17] + mtx1[9]*mtx2[22];
        mul9 = mtx1[5]*mtx2[3] + mtx1[6]*mtx2[8] + mtx1[7]*mtx2[13] + mtx1[8]*mtx2[18] + mtx1[9]*mtx2[23];
        mul10 = mtx1[5]*mtx2[4] + mtx1[6]*mtx2[9] + mtx1[7]*mtx2[14] + mtx1[8]*mtx2[19] + mtx1[9]*mtx2[24];
        
        mul11 = mtx1[10]*mtx2[0] + mtx1[11]*mtx2[5] + mtx1[12]*mtx2[10] + mtx1[13]*mtx2[15] + mtx1[14]*mtx2[20];
        mul12 = mtx1[10]*mtx2[1] + mtx1[11]*mtx2[6] + mtx1[12]*mtx2[11] + mtx1[13]*mtx2[16] + mtx1[14]*mtx2[21];
        mul13 = mtx1[10]*mtx2[2] + mtx1[11]*mtx2[7] + mtx1[12]*mtx2[12] + mtx1[13]*mtx2[17] + mtx1[14]*mtx2[22];
        mul14 = mtx1[10]*mtx2[3] + mtx1[11]*mtx2[8] + mtx1[12]*mtx2[13] + mtx1[13]*mtx2[18] + mtx1[14]*mtx2[23];
        mul15 = mtx1[10]*mtx2[4] + mtx1[11]*mtx2[9] + mtx1[12]*mtx2[14] + mtx1[13]*mtx2[19] + mtx1[14]*mtx2[24];
        
        mul16 = mtx1[15]*mtx2[0] + mtx1[16]*mtx2[5] + mtx1[17]*mtx2[10] + mtx1[18]*mtx2[15] + mtx1[19]*mtx2[20];
        mul17 = mtx1[15]*mtx2[1] + mtx1[16]*mtx2[6] + mtx1[17]*mtx2[11] + mtx1[18]*mtx2[16] + mtx1[19]*mtx2[21];
        mul18 = mtx1[15]*mtx2[2] + mtx1[16]*mtx2[7] + mtx1[17]*mtx2[12] + mtx1[18]*mtx2[17] + mtx1[19]*mtx2[22];
        mul19 = mtx1[15]*mtx2[3] + mtx1[16]*mtx2[8] + mtx1[17]*mtx2[13] + mtx1[18]*mtx2[18] + mtx1[19]*mtx2[23];
        mul20 = mtx1[15]*mtx2[4] + mtx1[16]*mtx2[9] + mtx1[17]*mtx2[14] + mtx1[18]*mtx2[19] + mtx1[19]*mtx2[24];
        
        mul21 = mtx1[20]*mtx2[0] + mtx1[21]*mtx2[5] + mtx1[22]*mtx2[10] + mtx1[23]*mtx2[15] + mtx1[24]*mtx2[20];
        mul22 = mtx1[20]*mtx2[1] + mtx1[21]*mtx2[6] + mtx1[22]*mtx2[11] + mtx1[23]*mtx2[16] + mtx1[24]*mtx2[21];
        mul23 = mtx1[20]*mtx2[2] + mtx1[21]*mtx2[7] + mtx1[22]*mtx2[12] + mtx1[23]*mtx2[17] + mtx1[24]*mtx2[22];
        mul24 = mtx1[20]*mtx2[3] + mtx1[21]*mtx2[8] + mtx1[22]*mtx2[13] + mtx1[23]*mtx2[18] + mtx1[24]*mtx2[23];
        mul25 = mtx1[20]*mtx2[4] + mtx1[21]*mtx2[9] + mtx1[22]*mtx2[14] + mtx1[23]*mtx2[19] + mtx1[24]*mtx2[24];

        cout<<mul1<<"\t"<<mul2<<"\t"<<mul3<<"\t"<<mul4<<"\t"<<mul5<<"\n";
        cout<<mul6<<"\t"<<mul7<<"\t"<<mul8<<"\t"<<mul9<<"\t"<<mul10<<"\n";
        cout<<mul11<<"\t"<<mul12<<"\t"<<mul13<<"\t"<<mul14<<"\t"<<mul15<<"\n";
        cout<<mul16<<"\t"<<mul17<<"\t"<<mul18<<"\t"<<mul19<<"\t"<<mul20<<"\n";
        cout<<mul21<<"\t"<<mul22<<"\t"<<mul23<<"\t"<<mul24<<"\t"<<mul25<<"\n";
    }
}

int main() {
    string x;
    int cho, i;

    while(true) {
        cout<<"\nMENU FOR MATRIX OPERATIONS\n";
        cout<<"[1] Addition of a 3X3 Matrix\n";
        cout<<"[2] Addition of a 4X4 Matrix\n";
        cout<<"[3] Addition of a 5X5 Matrix\n";
        cout<<"[4] Subtraction of a 3X3 Matrix\n";
        cout<<"[5] Subtraction of a 4X4 Matrix\n";
        cout<<"[6] Subtraction of a 5X5 Matrix\n";
        cout<<"[7] Multiplication of a 3X3 Matrix\n";
        cout<<"[8] Multiplication of a 4X4 Matrix\n";
        cout<<"[9] Multiplication of a 5X5 Matrix\n";
        
        cout<<"\nEnter your choice: "; cin>>cho;

        if (cho==1) {
            mtx3x3(cho);
        } else if(cho == 2){
            mtx4x4(cho);
        } else if(cho == 3){
            mtx5x5(cho);
        } else if(cho == 4){
            mtx3x3(cho);
        } else if(cho == 5){
            mtx4x4(cho);
        } else if(cho == 6){
            mtx5x5(cho);
        } else if(cho == 7){
            mtx3x3(cho);
        } else if(cho == 8){
            mtx4x4(cho);
        } else if(cho == 9){
            mtx5x5(cho);
        }

        cout<<"\nPress any key to go back to MAIN MENU or X/x to exit.\n"; cin>>x;
        if(x == "x" || x == "X") {
            break;
        } else {
            continue;
        }
        cout<<endl;
    }
}