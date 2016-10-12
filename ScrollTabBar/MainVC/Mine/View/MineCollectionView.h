//
//  MineCollectionView.h
//  bilibili fake
//
//  Created by 翟泉 on 2016/7/29.
//  Copyright © 2016年 云之彼端. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "MineGroupEntity.h"

//#import "RefreshCollectionView.h"
@interface MineCollectionView : UICollectionView

@property (strong, nonatomic) NSArray<MineGroupEntity *> *groups;

@property (strong, nonatomic) void (^handleDidSelectedItem)(NSIndexPath *indexPath);

//这个设置属性后, 该方法就是对应的setter和getter方法
//- (void)setHandleDidSelectedItem:(void (^)(NSIndexPath *indexPath))handleDidSelectedItem;

@end
