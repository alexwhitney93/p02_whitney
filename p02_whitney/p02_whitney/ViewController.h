//
//  ViewController.h
//  p02_whitney
//
//  Created by Alexander Whitney on 2/3/19.
//  Copyright © 2019 Alexander Whitney. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, strong) IBOutlet UITextField *tf0, *tf1, *tf2, *tf3;
@property (nonatomic, strong) IBOutlet UITextField *tf4, *tf5, *tf6, *tf7;
@property (nonatomic, strong) IBOutlet UITextField *tf8, *tf9, *tf10, *tf11;
@property (nonatomic, strong) IBOutlet UITextField *tf12, *tf13, *tf14, *tf15;
@property (nonatomic, strong) IBOutlet UITextField *scoreTextField;
@property (nonatomic, strong) IBOutlet UIButton *startGameButton;
@property (nonatomic, strong) IBOutlet UIButton *buttonUp, *buttonLeft, *buttonRight, *buttonDown;
@property (nonatomic, strong) NSArray *row0, *row1, *row2, *row3;
@property (nonatomic, strong) NSArray *col0, *col1, *col2, *col3;

@end

