//
//  SecondViewController.h
//  GestureTest2
//
//  Created by Diego Vidal on 11/02/15.
//  Copyright (c) 2015 Diego Vidal. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface PanView : UIViewController

@property (weak, nonatomic) IBOutlet UIView *quadrado;

@property (weak, nonatomic) IBOutlet UILabel *vHorizontal;
@property (weak, nonatomic) IBOutlet UILabel *vVertical;
@end
