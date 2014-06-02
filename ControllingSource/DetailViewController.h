//
//  DetailViewController.h
//  ControllingSource
//
//  Created by zengmiao on 6/2/14.
//  Copyright (c) 2014 clcong. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
