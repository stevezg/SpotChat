//
//  RoomViewController.h
//  SpotChat
//
//  Created by ansan on 3/8/14.
//  Copyright (c) 2014 Strocca. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <Firebase/Firebase.h>

@interface RoomViewController : UITableViewController

@property (nonatomic, strong) NSMutableArray* rooms;
@property (nonatomic, strong) Firebase* firebase;

@end
