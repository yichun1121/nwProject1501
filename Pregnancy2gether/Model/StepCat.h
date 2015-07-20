//
//  StepCat.h
//  Pregnancy2gether
//
//  Created by YICHUN on 2015/4/24.
//  Copyright (c) 2015年 nwlab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Step;

@interface StepCat : NSManagedObject

@property (nonatomic, retain) NSString * colorRGB;
@property (nonatomic, retain) NSString * iconName;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *steps;
@end

@interface StepCat (CoreDataGeneratedAccessors)

- (void)addStepsObject:(Step *)value;
- (void)removeStepsObject:(Step *)value;
- (void)addSteps:(NSSet *)values;
- (void)removeSteps:(NSSet *)values;

@end
