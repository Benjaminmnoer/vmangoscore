pipeline {
    agent {
        docker {
            image 'benjaminmnoer/trinity-basebuild:latest'
        }
    }
    stages {
        stage('Build') {
            steps {
                sh 'uname -a'
            }
        }
    }
}