//
//  GoodInfoViewController.h
//  flashShopping
//
//  Created by Width on 14-2-25.
//  Copyright (c) 2014年 chinawidth. All rights reserved.
//

#import "BaseViewController.h"

@interface GoodInfoViewController : BaseViewController

@property (strong, nonatomic) IBOutlet UIView *searchBox;
@property (unsafe_unretained, nonatomic) IBOutlet UITextField *textField;
- (IBAction)searchButton:(id)sender;

@end
