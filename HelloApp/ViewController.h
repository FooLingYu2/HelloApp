//
//  ViewController.h
//  HelloApp
//
//  Created by Marlou de Guzman on 7/31/12.
//  Copyright (c) 2012 Marlou de Guzman. All rights reserved.
//

//Testing out branches

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
- (IBAction)helloButtonPressed:(UIButton *)sender;
@property (weak, nonatomic) IBOutlet UITextField *helloTextField;
@property (weak, nonatomic) IBOutlet UILabel *helloLabel;

@end
