//
//  ViewController.h
//  p02_whitney
//
//  Created by Alexander Whitney on 2/3/19.
//  Copyright © 2019 Alexander Whitney. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
@property (nonatomic, strong) IBOutlet UICollectionView *grid;
@property (nonatomic, strong) IBOutlet UICollectionViewCell *cell0, *cell1, *cell2, *cell3;
@property (nonatomic, strong) IBOutlet UICollectionViewCell *cell4, *cell5, *cell6, *cell7;
@property (nonatomic, strong) IBOutlet UICollectionViewCell *cell8, *cell9, *cell10, *cell11;
@property (nonatomic, strong) IBOutlet UICollectionViewCell *cell12, *cell13, *cell14, *cell15;
@property (nonatomic, strong) IBOutlet UIButton *buttonUp, *buttonLeft, *buttonRight, *buttonDown;
@property (nonatomic, strong) NSArray *row0, *row1, *row2, *row3;
@property (nonatomic, strong) NSArray *col0, *col1, *col2, *col3;

@end

