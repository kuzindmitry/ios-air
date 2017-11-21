//
//  TicketTableViewCell.h
//  air
//
//  Created by kuzindmitry on 19.10.2017.
//  Copyright © 2017 kuzindmitry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <UIKit/UIKit.h>
#import "DataManager.h"
#import "APIManager.h"
#import "FavoriteTicket+CoreDataClass.h"

@interface TicketTableViewCell : UITableViewCell

@property (nonatomic, strong) UIImageView *airlineLogoView;
@property (nonatomic, strong) FavoriteTicket *favoriteTicket;
@property (nonatomic, strong) Ticket *ticket;

@end
