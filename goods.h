#pragma once
#ifndef _GOODS_H_
#define _GOODS_H_

class goods
{
public:

    int goods_type;             // 物品类型 1-9
    bool is_combined;           // 是否需要其他物品合成
    int buying_price;           // 买价
    int selling_price;          // 卖价
    int needgood[3] = {0,0,0};  // 需要的其他物品
};


#endif