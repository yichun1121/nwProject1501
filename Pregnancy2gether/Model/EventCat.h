//
//  EventCat.h
//  Pregnancy2gether
//
//  Created by YICHUN on 2015/4/24.
//  Copyright (c) 2015年 nwlab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event;

@interface EventCat : NSManagedObject

@property (nonatomic, retain) NSString * colorRGB;
@property (nonatomic, retain) NSString * iconName;
@property (nonatomic, retain) NSString * name;
@property (nonatomic, retain) NSSet *events;
@end

@interface EventCat (CoreDataGeneratedAccessors)

- (void)addEventsObject:(Event *)value;
- (void)removeEventsObject:(Event *)value;
- (void)addEvents:(NSSet *)values;
- (void)removeEvents:(NSSet *)values;

@end
