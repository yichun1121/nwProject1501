//
//  Photo.h
//  Pregnancy2gether
//
//  Created by YICHUN on 2015/4/24.
//  Copyright (c) 2015年 nwlab. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Event;

@interface Photo : NSManagedObject

@property (nonatomic, retain) NSString * desc;
@property (nonatomic, retain) NSString * filename;
@property (nonatomic, retain) NSString * relativePath;
@property (nonatomic, retain) Event *event;

@end
