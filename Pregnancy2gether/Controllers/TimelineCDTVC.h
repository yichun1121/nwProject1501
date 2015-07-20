//
//  TimelineCDTVC.h
//  Pregnancy2gether
//
//  Created by YICHUN on 2015/3/16.
//  Copyright (c) 2015年 nwlab. All rights reserved.
//

#import "CoreDataTableViewController.h"

@interface TimelineCDTVC : CoreDataTableViewController
@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;
// 因為繼承CoreDataTableViewController，所以需要有這兩個property：fetchedResultsController和managedObjectContext
@end
