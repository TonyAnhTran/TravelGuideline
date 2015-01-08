//
//  DetailViewController.h
//  Travel Guides
//
//  Created by Tu (Tony) A. TRAN on 1/7/15.
//  Copyright (c) 2015 Tu (Tony) A. TRAN. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

