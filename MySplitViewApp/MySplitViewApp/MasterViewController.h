//
//  MasterViewController.h
//  MySplitViewApp
//
//  Created by Student on 11/23/14.
//  Copyright (c) 2014 Adlyn Morrison. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController {
    DetailViewController *detailViewController;
    NSArray *attractions;
}

@property (strong, nonatomic) DetailViewController *detailViewController;


@end

