//
//  ttFeedDetailViewController.h
//  TestFeed
//
//  Created by LYZAKI_NUT on 8/18/14.
//  Copyright (c) 2014 Supaphong Weerayutkamjorn. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ttFeedDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
