//
//  DetailViewController.h
//  MySplitViewApp
//
//  Created by Student on 11/23/14.
//  Copyright (c) 2014 Adlyn Morrison. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@property (weak, nonatomic) IBOutlet UIWebView *pageView;

@end

