//
//  ttFeedMasterViewController.h
//  TestFeed
//
//  Created by LYZAKI_NUT on 8/18/14.
//  Copyright (c) 2014 Supaphong Weerayutkamjorn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ttFeedMasterViewController : UITableViewController
{
    
    IBOutlet UITableView *mainTableView;
    
    NSDictionary *news;
    NSMutableData *data;

}

@property (strong,nonatomic) NSMutableData * jsonResultData;
@property (strong,nonatomic) NSDictionary * dataFeed;



@end
