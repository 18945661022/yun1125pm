//
//  TestViewController.m
//  Unity-iPhone
//
//  Created by Apple on 2017/12/8.
//

#import "TestViewController.h"

@interface TestViewController ()
@property (retain, nonatomic) IBOutlet UIProgressView *progressBar;

@end

@implementation TestViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view from its nib.
    _progressBar.transform = CGAffineTransformMakeScale(1.0f, 1.3f);
    
}

- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}

-(void)setProgress:(float)value{
    _progressBar.progress = value;
}
/*
#pragma mark - Navigation

// In a storyboard-based application, you will often want to do a little preparation before navigation
- (void)prepareForSegue:(UIStoryboardSegue *)segue sender:(id)sender {
    // Get the new view controller using [segue destinationViewController].
    // Pass the selected object to the new view controller.
}
*/

- (void)dealloc {
    [_progressBar release];
    [super dealloc];
}
@end
