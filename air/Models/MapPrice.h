//
//  MapPrice.h
//  air
//
//  Created by kuzindmitry on 31.10.2017.
//  Copyright © 2017 kuzindmitry. All rights reserved.
//

#import <Foundation/Foundation.h>
#import "DataManager.h"

@interface MapPrice : NSObject

@property (strong, nonatomic) City *destination;
@property (strong, nonatomic) City *origin;
@property (strong, nonatomic) NSDate *departure;
@property (strong, nonatomic) NSDate *returnDate;
@property (nonatomic) NSInteger numberOfChanges;
@property (nonatomic) NSInteger value;
@property (nonatomic) NSInteger distance;
@property (nonatomic) BOOL actual;

- (instancetype)initWithDictionary:(NSDictionary *)dictionary withOrigin: (City *)origin;

@end
