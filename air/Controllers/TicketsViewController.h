//
//  TicketsViewController.h
//  air
//
//  Created by kuzindmitry on 19.10.2017.
//  Copyright © 2017 kuzindmitry. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TicketsViewController : UITableViewController

- (instancetype)initWithTickets:(NSArray *)tickets;
- (instancetype)initFavoriteTicketsController;

@end
