//
//  main.c
//  a
//
//  Created by s20161104608 on 2017/6/22.
//  Copyright © 2017年 s20161104608. All rights reserved.
//

#include<stdio.h>
#include<string.h>
int main(int argc,const char * argv[]){
    char time[10],gps,latitude1,longitude1,year[10],s[5];
    double latitude,longitude,v,course;
    FILE *fp1,*fp2,*fp3;
    fp1=fopen("//Users//S20161104608//Desktop//Gps1.log","w+");
    fp2=fopen("//Users//S20161104608//Desktop//Gps1.log","r");
    fp3=fopen("//Users//S20161104608//Desktop//Gps1.log","w+");
    
    if(fp2==NULL)
    {
        printf("打开文件错误，或者要打开的文件不存在");
    
    }
    else
    {
        fscanf(fp2,"SGPRMC,%6s,%c,%1f,%c,%1f,%1f,%6s,%s",time,&gps,&latitude,&latitude1,&longitude,&longitude1,&v,&course,year,s);
        if(gps=='A'){
            printf("现在为%c%c年%c%c月%c%c日%c%c时%c%c分%c%c秒\n",year[0],year[1],year[2],year[3],year[4],year[5],time[0],time[1],time[2],time[3],time[4],time[5]);
            if(latitude1=='N')
            {
                printf("该位置为北纬%1f度\n",latitude);
            }
            else
            {                                                                                                                                                                                             
                printf("该位置为南纬%1f度\n",latitude);
            }
            if(longitude1=='E')
            {
                printf("该位置为东经%1f度\n",longitude);
            }
            else
            {
               printf("该位置为西经%1f度\n",longitude);
            }
                printf("地面速率是%1f节,地面航向是%1f度\n",v,course);
        }
            else
            {
                fprintf(fp1,"GPRMC无效定位");
                printf("GPRMC无效定位");
                fprintf(fp3,"GPRMC无效定位");
    }
        fprintf(fp1,"GPS状态是");
        printf("GPS状态是");
        fprintf(fp3,"GPS状态是:");
    }
    
    switch (Gps)
    {
        case 0:
            fprintf(fp1,"初始化\n");
            printf("初始化\n");
            fprintf(fp3,"初始化,");
            break;
        case 1:
            fprintf(fp1,"单点定位\n");
            printf("单点定位\n");
            fprintf(fp3,"单点定位,");
            break;
        case 2:
            fprintf(fp1,"码差分\n");
            printf("码差分\n");
            fprintf(fp3,"码差分,");
            break;
        case 3:
            fprintf(fp1,"无效PPS\n");
            printf("无效PPS\n");
            fprintf(fp3,"无效PPS,");
            break;
        case 4:
            fprintf(fp1,"固定解\n");
            printf("固定解\n");
            fprintf(fp3,"固定解,");
            break;
        case 5:
            fprintf(fp1,"浮点解\n");
            printf("浮点解\n");
            fprintf(fp3,"浮点解,");
            break;
        case 6:
            fprintf(fp1,"正在估算\n");
            printf("正在估算\n");
            fprintf(fp3,"正在估算,");
            break;
        case 7:
            fprintf(fp1,"人工输入固定值\n");
            printf("人工输入固定值\n");
            fprintf(fp3,"人工输入固定值,");
            break;
        case 8:
            fprintf(fp1,"模拟模式\n");
            printf("模拟模式\n");
            fprintf(fp3,"模拟模式,");
            break;
        case 9:
            fprintf(fp1,"WAAS差分\n");
            printf("WAAS差分\n");
            fprintf(fp3,"WAAS差分,");
            break;
        default:
            break;
    }
    fclose(fp1);
    fclose(fp2);
fclose(fp3);}
