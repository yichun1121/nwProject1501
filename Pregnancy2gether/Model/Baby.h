//
//  Baby.h
//  Pregnancy2gether
//
//  Created by YICHUN on 2015/4/24.
//  Copyright (c) 2015年 nwlab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event, Step;

@interface Baby : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSDate * dueDate;
@property (nonatomic, retain) NSDate * lastMC;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSDate * ovulatoryDay;
@property (nonatomic, retain) NSNumber * period;
@property (nonatomic, retain) NSSet *events;
@property (nonatomic, retain) NSSet *steps;
@end

@interface Baby (CoreDataGeneratedAccessors)

- (void)addEventsObject:(Event *)value;
- (void)removeEventsObject:(Event *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;

- (void)addStepsObject:(Step *)value;
- (void)removeStepsObject:(Step *)value;
- (void)addSteps:(NSSet *)values;
- (void)removeSteps:(NSSet *)values;

@end
