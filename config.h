#pragma once
#ifndef _CONFIG_H_
#define _CONFIG_H_

class goods
{
public:
    int goods_type;             // 物品类型 1-9
    int buying_price;           // 买价
    int selling_price;          // 初始卖价
    bool is_combined;           // 是否需要其他物品合成
};

class workbench
{
public:
    int workbench_type;               // 工作台类型
    int leftime;
    int material_state;
    int goodstate;
    float x;
    float y;
    
};

class robot
{
public:
    int workbench_id;      // 所处工作台ID
    int goodtype;
    int ktime;             // 时间系数
    int kcrash;
    float anglespeed;
    float xlinespeed;      // 线速度
    float ylinespeed;
    float direction;
    float x;               // 坐标
    float y;
};

float getprice(int startprice, int ktime, int kcrash)
{
    return startprice * ktime * kcrash;
}

#endif