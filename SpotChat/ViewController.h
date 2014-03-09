//
//  ViewController.h
//  SpotChat
//
//  Copyright (c) 2014 Strocca.
//

#import <UIKit/UIKit.h>
#import <Firebase/Firebase.h>

@interface ViewController : UIViewController

@property (nonatomic, strong) NSString* name;
@property (nonatomic, strong) NSMutableArray* chat;
@property (nonatomic, strong) Firebase* firebase;
@property (nonatomic, strong) NSString* roomId;
@property (nonatomic, strong) NSString* roomName;

@property (weak, nonatomic) IBOutlet UITextField *textField;
@property (weak, nonatomic) IBOutlet UITableView *tableView;
@property (weak, nonatomic) IBOutlet UIButton *nameField;

@end
