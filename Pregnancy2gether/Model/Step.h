//
//  Step.h
//  Pregnancy2gether
//
//  Created by YICHUN on 2015/4/24.
//  Copyright (c) 2015年 nwlab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Baby, StepCat;

@interface Step : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSDate * end;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * start;
@property (nonatomic, retain) Baby *baby;
@property (nonatomic, retain) StepCat *stepCat;

@end
